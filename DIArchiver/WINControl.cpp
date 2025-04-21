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
        0,                              // Опциональные стили окна
        className,                     // Имя класса окна
        params.title,    // Текст окна
        WS_OVERLAPPEDWINDOW,            // Стиль окна
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL,                           // Родительское окно
        NULL,                           // Меню
        params.hInstance,                      // Экземпляр приложения
        this                            // Дополнительные данные (передаем this)
    );

    if (!hwnd) {
        throw std::runtime_error("Failed to create window");
    }

    this->control = hwnd;

    ShowWindow(hwnd, params.nCmdShow);

    WINLib::controlMessageLoop();
}