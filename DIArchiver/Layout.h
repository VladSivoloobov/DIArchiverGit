#pragma once
#include "Component.h"
#include "Alignment.h"
#include <vector>
#include <memory>

namespace WINLib {
	namespace WINLayouts {
		class Layout : public WINComponents::Component {
		private: 
			int gap;
			Alignment alignment;
			std::vector<std::shared_ptr<WINComponents::Component>> components;

		public:
			Layout(std::vector<std::shared_ptr<WINComponents::Component>> components, int gap, Alignment alignment) {
				this->components = components;
				this->gap = gap;
				this->alignment = alignment;



			}
		};
	}
}