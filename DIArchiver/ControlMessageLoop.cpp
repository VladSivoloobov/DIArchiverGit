#include <Windows.h>
#include "ControlMessageLoop.h"

void WINLib::controlMessageLoop() {
    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}