#include <Windows.h>
#include "Messages.h"

void WINLib::Messages::ShowError(const wchar_t* text) {
	MessageBox(NULL, text, L"Error", MB_OK | MB_ICONERROR);
}