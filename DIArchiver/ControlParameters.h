#pragma once
#include <Windows.h>

namespace WINLib {
	struct ControlParameters {
        HINSTANCE hInstance;
        HINSTANCE hPrevInstance;
        PWSTR pCmdLine;
        int nCmdShow;
        const wchar_t* title;
	};
}