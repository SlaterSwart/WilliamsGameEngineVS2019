#pragma once

#include "Engine/GameEngine.h"

class Ship : public GameObject
{
public: 
	//creates ship
	Ship();

	//Funtion overridden from GameObject
	void draw();
private:
	sf::Sprite sprite_;
};
typedef std::shared_ptr<Ship> ShipPtr;