#include "MainWINControl.h"
#include "ControlParameters.h"

using namespace WINLib;

LRESULT MainWINControl::HandleMessage(UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(this->control, &ps);
        TextOut(hdc, 50, 50, L"Hello, World!", 13);
        EndPaint(this->control, &ps);
        return 0;
    }
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    default:
        return DefWindowProc(this->control, msg, wParam, lParam);
    }
}

MainWINControl::MainWINControl(ControlParameters params)
    : WINControl(params, L"MainWindow", MainWindowProc) { }