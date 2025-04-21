#include "Button.h"
#include "Windows.h"
#include "Component.h"

WINLib::WINComponents::Button::Button(const wchar_t* text)
{
	this->text = text;
}

HWND WINLib::WINComponents::Button::Create(WINComponents::Component parent) {

}