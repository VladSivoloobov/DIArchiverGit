#include "ConvertCharToWideChar.h"
#include <stdexcept>
#include <WIndows.h>

std::wstring Utils::ConvertCharToWideChar(const char* text) {
	std::string narrowString = text;
	int size = MultiByteToWideChar(CP_UTF8, 0, narrowString.c_str(), -1, nullptr, 0);
	std::wstring wideString(size, 0);
	MultiByteToWideChar(CP_UTF8, 0, narrowString.c_str(), -1, &wideString[0], size);

	return wideString;
}