#include "MainWindowProc.h"

LRESULT CALLBACK WINLib::MainWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_CREATE:
        OutputDebugString(L"WM_CREATE: Window created.\n");
        return 0;

    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);
        TextOut(hdc, 50, 50, L"Hello, World!", 13);
        EndPaint(hwnd, &ps);
        return 0;
    }

    case WM_DESTROY:
        OutputDebugString(L"WM_DESTROY: Window destroyed.\n");
        PostQuitMessage(0);
        return 0;

    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}
