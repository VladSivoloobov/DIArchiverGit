#pragma once
#include <Windows.h>
#include <string>

namespace WINLib {
	namespace WINComponents {
		class Component {
		protected:
			HWND component;
			std::string name;
			std::vector<Event> events;

		public:
			virtual void Hide() = 0;
			virtual void Show() = 0;
			virtual ~Component() = default;
			virtual HWND Create(Component parent) = 0;
			virtual void addListener(Event event) = 0;
		};
	}
}