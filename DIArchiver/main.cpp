#ifndef UNICODE
#define UNICODE
#endif 

#include <windows.h>
#include "MainWINControl.h"
#include "Messages.h";
#include "ConvertCharToWideChar.h"
#include <string>
#include "ControlParameters.h"
#include "WINRoot.h"
#include <vector>
#include "Component.h"
#include <iostream>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
    WINLib::ControlParameters params{};

    params.hInstance = hInstance;
    params.hPrevInstance = hPrevInstance;
    params.pCmdLine = pCmdLine;
    params.nCmdShow = nCmdShow;
    params.title = L"DIArchiver";

    WINLib::WINRoot root = WINLib::WINRoot(params, std::vector<WINLib::WINComponents::Component>());
    
    return 0;
}