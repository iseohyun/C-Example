// WindowsProject1.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "WindowsProject1.h"
#define _USE_MATH_DEFINES
#include "math.h"

#define MAX_LOADSTRING 100
#define MARGIN 10

// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.
WCHAR szTitle[MAX_LOADSTRING];                  // 제목 표시줄 텍스트입니다.
WCHAR szWindowClass[MAX_LOADSTRING];            // 기본 창 클래스 이름입니다.
POINT second;
POINT minute;
POINT hour;
POINT Center;
unsigned int Radius;
HPEN hPenSec;
HPEN hPenMin;
HPEN hPenHour;

// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
void getTimeXY();
void updateSize(HWND hWnd);

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
        SelectObject(hdc, GetStockObject(GRAY_BRUSH));
        Rectangle(hdc, Center.x - Radius, Center.y - Radius, 
            Center.x + Radius, Center.y + Radius);
        SelectObject(hdc, GetStockObject(WHITE_BRUSH));
        for (int i = 0; i < 12; i++) {
            int x = sin(M_PI / 6 * i) * Radius*0.9;
            int y = cos(M_PI / 6 * i) * Radius*0.9;
            int sz = 10;
            if (i % 3) sz = 5;
            Ellipse(hdc, Center.x - x - sz, Center.y + y- sz,
                Center.x - x+ sz, Center.y + y+ sz);
        }
        //SelectObject(hdc, GetStockObject(BLACK_PEN));

        getTimeXY();
        SelectObject(hdc, hPenHour);
        MoveToEx(hdc, Center.x, Center.y, NULL);
        LineTo(hdc, hour.x, hour.y);

        SelectObject(hdc, hPenMin);
        MoveToEx(hdc, Center.x, Center.y, NULL);
        LineTo(hdc, minute.x, minute.y);

        SelectObject(hdc, hPenSec);
        MoveToEx(hdc, Center.x, Center.y, NULL);
        LineTo(hdc, second.x, second.y);

            EndPaint(hWnd, &ps);
        }
        break;
    case WM_TIMER:
        if (wParam == 1) {
            InvalidateRect(hWnd, NULL, true);
        }
        break;
    case WM_SIZE:
        updateSize(hWnd);
        InvalidateRect(hWnd, NULL, true);
        break;
    case WM_CREATE:
    {
        hPenHour = CreatePen(PS_SOLID, 30, RGB(100, 100, 255));
        hPenMin = CreatePen(PS_SOLID, 20, RGB(100, 255, 100));
        hPenSec = CreatePen(PS_SOLID, 5, RGB(255, 100, 100));
        updateSize(hWnd);
        SetTimer(hWnd, 1, 1000, NULL);
        break;
    }
    case WM_DESTROY:
        KillTimer(hWnd, 1);
        DeleteObject(hPenSec);
        DeleteObject(hPenMin);
        DeleteObject(hPenHour);
        PostQuitMessage(0);
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

void getTimeXY() {
    SYSTEMTIME curTime;
    GetLocalTime(&curTime);
    double h = ((curTime.wHour + curTime.wMinute / 60.0) / 12) * 2 * M_PI;
    hour.x = sin(h) * Radius * 0.5 + Center.x;
    hour.y = -cos(h) * Radius * 0.5 + Center.y;

    double m = ((curTime.wMinute + (curTime.wSecond / 60.0)) / 60.0) * 2 * M_PI;
    minute.x = sin(m) * Radius * 0.8 + Center.x;
    minute.y = -cos(m) * Radius * 0.8 + Center.y;

    double s = (curTime.wSecond / 60.0) * 2 * M_PI;
    second.x = sin(s) * Radius * 0.9 + Center.x;
    second.y = -cos(s) * Radius * 0.9 + Center.y;
}

void updateSize(HWND hWnd) {
    RECT rect;
    GetClientRect(hWnd, &rect);
    Center.x = rect.right / 2;
    Center.y = rect.bottom / 2;
    Radius = (min(Center.x, Center.y) - MARGIN);
}
