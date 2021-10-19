// WindowsProject1.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "WindowsProject1.h"

#define MAX_LOADSTRING 100
#define VIEW_MARGIN 50
#define STEP_SIZE   26
#define STEP_MAX    19
#define RADIUS      (STEP_SIZE/2 - 1)
#define POS(x)      (VIEW_MARGIN + (x) * STEP_SIZE)

// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.
WCHAR szTitle[MAX_LOADSTRING];                  // 제목 표시줄 텍스트입니다.
WCHAR szWindowClass[MAX_LOADSTRING];            // 기본 창 클래스 이름입니다.
unsigned char unit[STEP_MAX][STEP_MAX] = { 0, };
unsigned char turn = 1;
HBRUSH hBkBrush;

// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: 여기에 코드를 입력합니다.

    // 전역 문자열을 초기화합니다.
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_WINDOWSPROJECT1, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // 애플리케이션 초기화를 수행합니다:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT1));

    MSG msg;

    // 기본 메시지 루프입니다:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  함수: MyRegisterClass()
//
//  용도: 창 클래스를 등록합니다.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT1));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINDOWSPROJECT1);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   함수: InitInstance(HINSTANCE, int)
//
//   용도: 인스턴스 핸들을 저장하고 주 창을 만듭니다.
//
//   주석:
//
//        이 함수를 통해 인스턴스 핸들을 전역 변수에 저장하고
//        주 프로그램 창을 만든 다음 표시합니다.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // 인스턴스 핸들을 전역 변수에 저장합니다.

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  함수: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  용도: 주 창의 메시지를 처리합니다.
//
//  WM_COMMAND  - 애플리케이션 메뉴를 처리합니다.
//  WM_PAINT    - 주 창을 그립니다.
//  WM_DESTROY  - 종료 메시지를 게시하고 반환합니다.
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // 메뉴 선택을 구문 분석합니다:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...

        HBRUSH hNewBrush = CreateSolidBrush(RGB(244, 176, 77));
        RECT r = { 0, 0, VIEW_MARGIN * 2 + STEP_SIZE * STEP_MAX, VIEW_MARGIN * 2 + STEP_SIZE * STEP_MAX };
        FillRect(hdc, &r, hNewBrush);
        DeleteObject(hNewBrush);

        for (int x = 0; x < STEP_MAX; x++) {
            MoveToEx(hdc, POS(x), POS(0), NULL);
            LineTo(hdc, POS(x), POS(STEP_MAX - 1));

            MoveToEx(hdc, POS(0), POS(x), NULL);
            LineTo(hdc, POS(STEP_MAX - 1), POS(x));
        }
        for (int x = 0; x < STEP_MAX; x++) {
            for (int y = 0; y < STEP_MAX; y++) {
                if (unit[x][y] == 0) {
                    continue;
                }
                else if (unit[x][y] % 2) {
                    SelectObject(hdc, GetStockObject(BLACK_BRUSH));
                }
                else {
                    SelectObject(hdc, GetStockObject(WHITE_BRUSH));
                }
                Ellipse(hdc, POS(x) - RADIUS, POS(y) - RADIUS, POS(x) + RADIUS, POS(y) + RADIUS);
            }
        }

            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    case WM_LBUTTONDOWN:
        if ((LOWORD(lParam) >= VIEW_MARGIN - RADIUS)
            && (LOWORD(lParam) <= VIEW_MARGIN + STEP_SIZE * STEP_MAX + RADIUS)
            && (HIWORD(lParam) >= VIEW_MARGIN - RADIUS)
            && (HIWORD(lParam) <= VIEW_MARGIN + STEP_SIZE * STEP_MAX + RADIUS)) {
            unsigned char x = ((LOWORD(lParam) + STEP_SIZE / 2) - VIEW_MARGIN) / STEP_SIZE;
            unsigned char y = ((HIWORD(lParam) + STEP_SIZE / 2) - VIEW_MARGIN) / STEP_SIZE;
            if (x < STEP_MAX && y < STEP_MAX) {
                if (unit[x][y]) {
                    MessageBox(hWnd, L"그곳은 둘 수 없습니다.", L"확인", MB_OK);
                }
                else {
                    unit[x][y] = turn++;
                }

            }
            InvalidateRect(hWnd, NULL, NULL);
        }
        break;
    case WM_KEYDOWN:
        if (wParam == VK_CONTROL) {

            HDC hdc = GetDC(hWnd);
            SetBkMode(hdc, TRANSPARENT);
            for (int x = 0; x < STEP_MAX; x++) {
                for (int y = 0; y < STEP_MAX; y++) {
                    wchar_t buf[3];
                    buf[2] = unit[x][y] % 10 + '0';
                    buf[1] = (unit[x][y] / 10) % 10 + '0';
                    buf[0] = unit[x][y] / 100 + '0';

                    if (unit[x][y] == 0) {
                        continue;
                    }
                    else if (unit[x][y] % 2) {
                        SetTextColor(hdc, RGB(255, 255, 255));
                    }
                    else {
                        SetTextColor(hdc, RGB(0, 0, 0));
                    }
                    TextOut(hdc,
                        x * STEP_SIZE + VIEW_MARGIN - RADIUS,
                        y * STEP_SIZE + VIEW_MARGIN - RADIUS / 2 - 2,
                        buf, 3);
                }
            }
            ReleaseDC(hWnd, hdc);
            break;
        }
    case WM_KEYUP:
        if (wParam == VK_CONTROL) {
            InvalidateRect(hWnd, NULL, NULL);
        }
        break;

    case WM_RBUTTONUP:
        if (turn == 1) {
            break;
        }
        else {
            turn--;
        }
        for (int x = 0; x < STEP_MAX; x++) {
            for (int y = 0; y < STEP_MAX; y++) {

                if (unit[x][y] == turn) {
                    unit[x][y] = 0;
                    InvalidateRect(hWnd, NULL, NULL);
                    break;
                }
            }
        }
        InvalidateRect(hWnd, NULL, NULL);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// 정보 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
