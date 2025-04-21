#include "WINControl.h"
#include "RegisterClass.h"
#include "ControlMessageLoop.h"
#include <iostream>

WINLib::WINControl::WINControl(ControlParameters params, const wchar_t* className, WNDPROC wndProc) {
    this->wndProc = wndProc;

    if (!this->wndProc) {
        throw std::exception("WndProc is null");
    }

    WINLib::registerClass(className, params.hInstance, this->wndProc);

    HWND hwnd = CreateWindowEx(
        0,                              // ������������ ����� ����
        className,                     // ��� ������ ����
        params.title,    // ����� ����
        WS_OVERLAPPEDWINDOW,            // ����� ����
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL,                           // ������������ ����
        NULL,                           // ����
        params.hInstance,                      // ��������� ����������
        this                            // �������������� ������ (�������� this)
    );

    if (!hwnd) {
        throw std::runtime_error("Failed to create window");
    }

    this->control = hwnd;

    ShowWindow(hwnd, params.nCmdShow);

    WINLib::controlMessageLoop();
}