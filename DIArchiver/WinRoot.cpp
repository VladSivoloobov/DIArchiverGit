#include "WINRoot.h"
#include "MainWINControl.h"
#include "Messages.h"
#include "ConvertCharToWideChar.h"
#include "Component.h"
#include "vector"

WINLib::WINRoot::WINRoot(ControlParameters params, std::vector<WINLib::WINComponents::Component> components) {
    try {
        WINLib::MainWINControl mainWindow(params);
    }
    catch (const std::exception& e) {
        WINLib::Messages::ShowError(Utils::ConvertCharToWideChar(e.what()).c_str());
    }
}