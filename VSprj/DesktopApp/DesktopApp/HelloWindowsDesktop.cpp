/**
* 출처 : Microsoft, Docs / Microsoft C++, C 및 어셈블러 / Windows / 연습: Windows 데스크톱 애플리케이션 만들기
*	https://docs.microsoft.com/ko-kr/cpp/windows/walkthrough-creating-windows-desktop-applications-cpp?view=msvc-160
* 
* 작성자 : iseohyun@hanmail.net
* 
*/

#include <windows.h>
#include <tchar.h>

static TCHAR szWindowClass[] = _T("프로그램 이름");
static TCHAR szTitle[] = _T("윈도우 제목");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// Console에서 void main에 해당하는 함수입니다.
// 컴퓨터에게 시작 지점을 알려줍니다.
int WINAPI WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR     lpCmdLine,
	_In_ int       nCmdShow
)
{
	// 프로그램을 윈도우에 등록하는 단계
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_GLOBALCLASS;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(wcex.hInstance, IDI_APPLICATION);
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, IDI_APPLICATION);

	if (!RegisterClassEx(&wcex))
	{
		MessageBox(NULL,
			_T("RegisterClassEx 실패!"),
			szTitle,
			NULL);

		return 1;
	}

	// 프로그램을 윈도우에 등록하는 단계 CreateWindowEx(...)
	HWND hWnd = CreateWindowEx(
		WS_EX_OVERLAPPEDWINDOW,	// 확장창(선택)
		szWindowClass,	// 프로그램 이름
		szTitle,	// 제목
		WS_OVERLAPPEDWINDOW,	// 생성할 창 유형
		CW_USEDEFAULT, CW_USEDEFAULT,	// 초기 위치(x, y)
		500, 100,	// 초기 크기(넓이, 높이)
		NULL,	// 부모
		NULL,	// 메뉴표시
		hInstance,	//WinMain의 첫번째 매개변수
		NULL	// 이번 예제에서는 사용하지 않음
	);

	if (!hWnd)
	{
		MessageBox(NULL,
			_T("윈도우 생성 실패!"),
			szTitle,
			NULL);

		return 1;
	}

	ShowWindow(hWnd, nCmdShow); // CreateWindow에서 반환된 값, WinMain의 네 번째 매개변수
	UpdateWindow(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (int)msg.wParam;
}

//  메시지가 입력되면 수행할 내용
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	TCHAR greeting[] = _T("내용으로 들어갈 문구입니다.");

	switch (message)
	{
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);

		// 내용 채우는용도
		TextOut(hdc,
			5, 5,
			greeting, _tcslen(greeting));
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
		break;
	}

	return 0;
}