/**
* ��ó : Microsoft, Docs / Microsoft C++, C �� ����� / Windows / ����: Windows ����ũ�� ���ø����̼� �����
*	https://docs.microsoft.com/ko-kr/cpp/windows/walkthrough-creating-windows-desktop-applications-cpp?view=msvc-160
* 
* �ۼ��� : iseohyun@hanmail.net
* 
*/

#include <windows.h>
#include <tchar.h>

static TCHAR szWindowClass[] = _T("���α׷� �̸�");
static TCHAR szTitle[] = _T("������ ����");
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// Console���� void main�� �ش��ϴ� �Լ��Դϴ�.
// ��ǻ�Ϳ��� ���� ������ �˷��ݴϴ�.
int WINAPI WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR     lpCmdLine,
	_In_ int       nCmdShow
)
{
	// ���α׷��� �����쿡 ����ϴ� �ܰ�
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
			_T("RegisterClassEx ����!"),
			szTitle,
			NULL);

		return 1;
	}

	// ���α׷��� �����쿡 ����ϴ� �ܰ� CreateWindowEx(...)
	HWND hWnd = CreateWindowEx(
		WS_EX_OVERLAPPEDWINDOW,	// Ȯ��â(����)
		szWindowClass,	// ���α׷� �̸�
		szTitle,	// ����
		WS_OVERLAPPEDWINDOW,	// ������ â ����
		CW_USEDEFAULT, CW_USEDEFAULT,	// �ʱ� ��ġ(x, y)
		500, 100,	// �ʱ� ũ��(����, ����)
		NULL,	// �θ�
		NULL,	// �޴�ǥ��
		hInstance,	//WinMain�� ù��° �Ű�����
		NULL	// �̹� ���������� ������� ����
	);

	if (!hWnd)
	{
		MessageBox(NULL,
			_T("������ ���� ����!"),
			szTitle,
			NULL);

		return 1;
	}

	ShowWindow(hWnd, nCmdShow); // CreateWindow���� ��ȯ�� ��, WinMain�� �� ��° �Ű�����
	UpdateWindow(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (int)msg.wParam;
}

//  �޽����� �ԷµǸ� ������ ����
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	TCHAR greeting[] = _T("�������� �� �����Դϴ�.");

	switch (message)
	{
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);

		// ���� ä��¿뵵
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