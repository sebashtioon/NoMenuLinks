#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>

class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}

		auto robLinks = this->getChildByID("social-media-menu");
		robLinks->setVisible(false);


		auto playerUsername = this->getChildByID("player-username");
		auto profileMenu = this->getChildByID("profile-menu");

		playerUsername->setPosition(45.000, 78.000);
		profileMenu->setPosition(91.000, 45.000);
		
		return true;
	}

};