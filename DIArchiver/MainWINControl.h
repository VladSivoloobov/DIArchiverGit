#pragma once
#include "WINControl.h"
#include "MainWindowProc.h"

namespace WINLib {
    class MainWINControl : public WINControl {
    protected:
        LRESULT HandleMessage(UINT msg, WPARAM wParam, LPARAM lParam) override;

    public:
        MainWINControl(ControlParameters params);
    };
}