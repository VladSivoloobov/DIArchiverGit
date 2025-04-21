#pragma once
#include <windows.h>
#include "ControlParameters.h"

namespace WINLib {
	class WINControl {
	protected:
		WNDPROC wndProc = NULL;
		HWND control;

		virtual LRESULT HandleMessage(UINT msg, WPARAM wParam, LPARAM lParam) = 0;
	public:
		WINControl(ControlParameters params, const wchar_t* className, WNDPROC wndProc);
	};
}