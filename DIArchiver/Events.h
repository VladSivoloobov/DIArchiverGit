#pragma once
#include <functional>

namespace WINLib {
	struct Event {
		wchar_t eventName;
		std::function<void()> callback;
	};

	struct PositionalEvent {
		int x;
		int y;
	};

	struct ClickEvent : Event, PositionalEvent {
		
	};
}