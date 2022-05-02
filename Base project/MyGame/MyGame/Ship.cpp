#include "Ship.h"
const float SPEED = 0.3f;
Ship::Ship() {
	sprite_.setTexture(GAME.getTexture("Resources / ship.png"));
	sprite_.setPosition(sf::Vector2f(100, 100));
}
void Ship::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}
void Ship::update(sf::Time& elapsed) {
	sf::Vector2f pos = 
}