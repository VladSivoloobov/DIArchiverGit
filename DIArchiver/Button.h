#pragma once

#include "Component.h"
#include "Events.h"
#include <vector>

namespace WINLib {
	namespace WINComponents {
		class Button : Component {
			const wchar_t* text;
		public:
			Button(const wchar_t* text);
			HWND Create(Component parent) override;
			void addListener(Event event) override;
		};
	}
}