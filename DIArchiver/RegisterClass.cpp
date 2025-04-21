#include <Windows.h>
#include "RegisterClass.h"

ATOM WINLib::registerClass(const wchar_t* className, HINSTANCE hInstance, WNDPROC wndProc) {
	WNDCLASS wc = {};
	wc.lpfnWndProc = wndProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = className;

	return RegisterClass(&wc);
}