#pragma once
#include <Windows.h>
#include "MainWINControl.h";
#include "ControlParameters.h"
#include "vector"
#include "Component.h"

namespace WINLib {
    class WINRoot {

    public:
        WINRoot(ControlParameters params, std::vector<WINLib::WINComponents::Component> components);
    };
}