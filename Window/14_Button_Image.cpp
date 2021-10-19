#include "framework.h"
#include "WindowsProject1.h"

#define MAX_LOADSTRING 100

HINSTANCE hInst;
WCHAR szTitle[MAX_LOADSTRING];
WCHAR szWindowClass[MAX_LOADSTRING];

ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_WINDOWSPROJECT1, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    if (!InitInstance(hInstance, nCmdShow))
        return FALSE;

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT1));
    MSG msg;

    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int)msg.wParam;
}

ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT1));
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
    hInst = hInstance;

    HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

    if (!hWnd)
        return FALSE;

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return TRUE;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
    HBITMAP hBitmap;
    LPDRAWITEMSTRUCT dRawitem;
    RECT rect = { 5, 5, 195, 55 };
    static HWND hButton1;
    static HWND hButton2;
    static COLORREF Color = RGB(200, 200, 200);
    static HBRUSH hBrush = CreateSolidBrush(Color);

    switch (iMessage) {
    case WM_CREATE:
        hBitmap = (HBITMAP)LoadImage(NULL, TEXT("btn1.bmp"), IMAGE_BITMAP,
            0, 0, LR_CREATEDIBSECTION | LR_LOADFROMFILE);
        hButton1 = CreateWindow(TEXT("button"), TEXT("text"),
            WS_CHILD | WS_VISIBLE | BS_BITMAP,
            50, 50, 300, 150, hWnd,
            (HMENU)1, hInst, NULL);
        SendMessage(hButton1, BM_SETIMAGE, (WPARAM)IMAGE_BITMAP, (LPARAM)hBitmap);
        hButton2 = CreateWindow(L"Button", L"",
            WS_CHILD | WS_VISIBLE | BS_OWNERDRAW,
            50, 250, 200, 60, hWnd,
            (HMENU)0, hInst, NULL);
        break;
    case WM_CTLCOLORBTN:
        SetTextColor((HDC)wParam, Color);
        SetBkColor((HDC)wParam, Color ^ 0x00FFFFFF);
        return (LRESULT)hBrush;
    case WM_COMMAND:
        if (lParam == (LPARAM)hButton1) {
            MessageBox(hWnd, L"�̹��� ��ư", L"Ȯ��", MB_OK);
        }
        else if (lParam == (LPARAM)hButton2) {
            DeleteObject(hBrush);
            Color = (COLORREF)rand();
            hBrush = CreateSolidBrush(Color);
            InvalidateRect(hWnd, NULL, true);
        }
        break;
    case WM_DRAWITEM:
        dRawitem = (LPDRAWITEMSTRUCT)lParam;
        if (dRawitem->itemState & ODS_SELECTED) {
            TextOut(dRawitem->hDC, 30, 20, TEXT("��ư ����"), 5);
        }
        else {
            TextOut(dRawitem->hDC, 30, 20, TEXT("��ư"), 2);
            if (dRawitem->itemState & ODS_FOCUS)
                FrameRect(dRawitem->hDC, &rect, (HBRUSH)GetStockObject(WHITE_BRUSH));
            else
                FrameRect(dRawitem->hDC, &rect, (HBRUSH)GetStockObject(BLACK_BRUSH));
            //���õǾ����� ����� �ڽ��� �׷��ݴϴ�. 
        }
        break;
    case WM_LBUTTONDOWN:
        InvalidateRect(hWnd, NULL, true);
        break;
    case WM_DESTROY:
        DeleteObject(hBrush);
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, iMessage, wParam, lParam);
    }
    return 0;
}