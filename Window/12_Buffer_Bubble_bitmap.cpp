// WindowsProject1.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "WindowsProject1.h"
#include <stdlib.h>
#include <time.h>

#define MAX_LOADSTRING 100
#define MAX_CIRCLE  100
struct Circle {
    int x, y;
    int r;
    COLORREF color;
};

// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.
WCHAR szTitle[MAX_LOADSTRING];                  // 제목 표시줄 텍스트입니다.
WCHAR szWindowClass[MAX_LOADSTRING];            // 기본 창 클래스 이름입니다.
Circle g_pos[MAX_CIRCLE];
RECT g_rect;
HDC g_hdc;
HBITMAP g_hBitmap;

// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
void CreateCircle(Circle* pCircle, int left, int bot);
void DrawEllipse(HDC hdc);

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
        BitBlt(hdc, 0, 0, g_rect.right, g_rect.bottom, g_hdc, 0, 0, SRCCOPY);
            EndPaint(hWnd, &ps);
        }
        break;
    case WM_CREATE:
    {
        srand((unsigned int)time(NULL));
        GetClientRect(hWnd, &g_rect);
        HDC hdc = GetDC(hWnd);
        g_hdc = CreateCompatibleDC(hdc);
        g_hBitmap = CreateCompatibleBitmap(hdc, g_rect.right, g_rect.bottom);

        SelectObject(g_hdc, g_hBitmap);
        ReleaseDC(hWnd, hdc);

        for (int i = 0; i < MAX_CIRCLE; i++) {
            CreateCircle(g_pos + i, g_rect.right, g_rect.bottom);
        }

		SetTimer(hWnd, 1, 50, NULL);
        break;
    }
    case WM_SIZE:
    {
        GetClientRect(hWnd, &g_rect);
        if (g_hBitmap != NULL) DeleteObject(g_hBitmap);
        HDC hdc = GetDC(hWnd);
        g_hBitmap = CreateCompatibleBitmap(hdc, g_rect.right, g_rect.bottom);
        SelectObject(g_hdc, g_hBitmap);
        ReleaseDC(hWnd, hdc);
        DrawEllipse(g_hdc);
    }
    case WM_TIMER:
        if (wParam == 1) {
            for (int i = 0; i < MAX_CIRCLE; i++) {
                g_pos[i].r--;
                if (g_pos[i].r <= 1) {
                    CreateCircle(g_pos + i, g_rect.right, g_rect.bottom);
                }
            }
            DrawEllipse(g_hdc);
            InvalidateRect(hWnd, NULL, false);
        }
        break;
    case WM_DESTROY:
        KillTimer(hWnd, 1);
        DeleteObject(g_hBitmap);
        DeleteDC(g_hdc);
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

void CreateCircle(Circle* pCircle, int maxX, int maxY) {
    pCircle->x = rand() % maxX;
    pCircle->y = rand() % maxY;
    pCircle->r = rand() % 150 + 10;
    pCircle->color = RGB(rand() % 256, rand() % 256, rand() % 256);
}

void DrawEllipse(HDC hdc) {
    HBRUSH hBrush;
    HGDIOBJ hOldBrush = GetCurrentObject(hdc, OBJ_BRUSH);
    HGDIOBJ hOldPen = SelectObject(hdc, GetStockObject(NULL_PEN));
    FillRect(hdc, &g_rect, (HBRUSH)GetStockObject(WHITE_BRUSH));

    for (int i = 0; i < MAX_CIRCLE; i++) {
        hBrush = CreateSolidBrush(g_pos[i].color);
        SelectObject(hdc, hBrush);
        Ellipse(hdc, g_pos[i].x - g_pos[i].r, g_pos[i].y - g_pos[i].r, g_pos[i].x + g_pos[i].r, g_pos[i].y + g_pos[i].r);
        DeleteObject(hBrush);
    }
    SelectObject(hdc, hOldPen);
    SelectObject(hdc, hOldBrush);
}
