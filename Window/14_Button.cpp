#include "framework.h"
#include "WindowsProject1.h"

#define MAX_LOADSTRING 100
#define MAX_BTN_STYLE   13
#define BTN_HEIGHT 50
#define BTN_WIDTH 150
#define BTN_MARGIN 15

HINSTANCE hInst;
WCHAR szTitle[MAX_LOADSTRING];
WCHAR szWindowClass[MAX_LOADSTRING];
HWND hwndBtn[MAX_BTN_STYLE];

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
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOWFRAME);
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
    int x = 10, y = 10;

    int listBtnStyle[MAX_BTN_STYLE] = {
        BS_PUSHBUTTON,  BS_DEFPUSHBUTTON | 0x10,
        BS_CHECKBOX, BS_AUTOCHECKBOX, BS_3STATE, BS_AUTO3STATE | 0x10,
        BS_RADIOBUTTON | WS_GROUP, BS_RADIOBUTTON | 0x10,
        BS_AUTORADIOBUTTON | WS_GROUP, BS_AUTORADIOBUTTON, BS_AUTORADIOBUTTON | 0x10,
        BS_GROUPBOX, BS_OWNERDRAW
    };

    const wchar_t* listBtnName[MAX_BTN_STYLE] = {
        L"PUSH",  L"DEFPUSH",
        L"CHECKBOX", L"AUTO", L"3STATE", L"3-AUTO",
        L"RADIO", L"RADIO2",
        L"AUTORADIO", L"AUTORADIO2", L"AUTORADIO3",
        L"GROUPBOX", L"BS_OWNERDRAW"
    };

    for (int i = 0; i < MAX_BTN_STYLE; i++)
    {
        hwndBtn[i] = CreateWindow(
            L"BUTTON",
            listBtnName[i],
            WS_VISIBLE | WS_CHILD | listBtnStyle[i],
            x, y,
            BTN_WIDTH, BTN_HEIGHT,
            hWnd,
            NULL,
            (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
            NULL);

        x += BTN_WIDTH + BTN_MARGIN;
        if (listBtnStyle[i] & 0x10) {
            x = BTN_MARGIN;
            y += (BTN_HEIGHT + BTN_MARGIN);
        }
    }


    if (!hWnd)
        return FALSE;

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return TRUE;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
    {
        if (lParam == (LPARAM)hwndBtn[0])   // 일반적인 버튼입니다.
        {
            wchar_t Buf[20] = { 0, };
            SendMessage(hwndBtn[0], WM_GETTEXT, 19, (LPARAM)Buf);
            if (wcscmp(Buf, L"버튼명 바꾸기")) {
                SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"버튼명 바꾸기");
            }
            else {
                SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"원상태로");
            }
        }
        else if (lParam == (LPARAM)hwndBtn[1]) {
            MessageBox(hWnd, L"버튼이 눌렸습니다", L"확인", MB_OK);
        }
        else if (lParam == (LPARAM)hwndBtn[2]) {
            SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"체크 수동");
            if (SendMessage(hwndBtn[2], BM_GETCHECK, NULL, NULL) == BST_CHECKED) {
                SendMessage(hwndBtn[2], BM_SETCHECK, BST_UNCHECKED, NULL);
            }
            else {
                SendMessage(hwndBtn[2], BM_SETCHECK, BST_CHECKED, NULL);
            }
        }
        else if (lParam == (LPARAM)hwndBtn[3]) {
            if (SendMessage(hwndBtn[3], BM_GETCHECK, NULL, NULL) == BST_CHECKED) {
                SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"체크박스 ON");
            }
            else {
                SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"체크박스 OFF");
            }
        }
        else if (lParam == (LPARAM)hwndBtn[4]) {
            SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"3단 체크 수동");
            LRESULT ret = SendMessage(hwndBtn[4], BM_GETCHECK, NULL, NULL);
            switch (ret) {
            case BST_UNCHECKED:
                SendMessage(hwndBtn[4], BM_SETCHECK, BST_CHECKED, NULL);
                break;
            case BST_CHECKED:
                SendMessage(hwndBtn[4], BM_SETCHECK, BST_INDETERMINATE, NULL);
                break;
            case BST_INDETERMINATE:
                SendMessage(hwndBtn[4], BM_SETCHECK, BST_UNCHECKED, NULL);
                break;
            }
        }
        else if (lParam == (LPARAM)hwndBtn[5]) {
            LRESULT ret = SendMessage(hwndBtn[5], BM_GETCHECK, NULL, NULL);
            switch (ret) {
            case BST_UNCHECKED:
                SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"3단 체크 : OFF");
                break;
            case BST_CHECKED:
                SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"3단 체크 : ON");
                break;
            case BST_INDETERMINATE:
                SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"3단 체크 : 중립");
                break;
            }
        }
        else if (lParam == (LPARAM)hwndBtn[6]) {
            SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"라디오 수동1");
            SendMessage(hwndBtn[6], BM_SETCHECK, BST_CHECKED, NULL);
            SendMessage(hwndBtn[7], BM_SETCHECK, BST_UNCHECKED, NULL);
        }
        else if (lParam == (LPARAM)hwndBtn[7]) {
            SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"라디오 수동2");
            SendMessage(hwndBtn[6], BM_SETCHECK, BST_UNCHECKED, NULL);
            SendMessage(hwndBtn[7], BM_SETCHECK, BST_CHECKED, NULL);
        }
        else if (lParam == (LPARAM)hwndBtn[8]) {
            SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"라디오 1");
        }
        else if (lParam == (LPARAM)hwndBtn[9]) {
            SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"라디오 2");
        }
        else if (lParam == (LPARAM)hwndBtn[10]) {
            SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"라디오 3");
        }
        else if (lParam == (LPARAM)hwndBtn[12]) {
            SendMessage(hwndBtn[0], WM_SETTEXT, 0, (LPARAM)L"사용자지정");
        }
        break;
    }
    case WM_CTLCOLORSTATIC:
        SetBkColor((HDC)wParam, RGB(255, 255, 255));
        SetBkMode((HDC)wParam, OPAQUE);
        return(LRESULT)GetStockObject(HOLLOW_BRUSH);
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}