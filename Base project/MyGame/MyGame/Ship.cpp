#include "Ship.h"
const float SPEED = 0.3f;
Ship::Ship() {
	sprite_.setTexture(GAME.getTexture("Resources/ship.png"));
	sprite_.setPosition(sf::Vector2f(100, 100));
}
void Ship::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}
void Ship::update(sf::Time& elapsed) {
	sf::Vector2f pos = sprite_.getPosition();
	float x = pos.x;
	float y = pos.y;
	float yMax = 600;
	float xMax = 800;
	int msElapsed = elapsed.asMilliseconds();
												 
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		y -= SPEED * msElapsed;
		if (y < 0) {
			y = 0;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		y += SPEED * msElapsed;
		if (y > yMax) {
			y = yMax + 120;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		x -= SPEED * msElapsed;
		if (x < 0) {
			x = 0;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		x += SPEED * msElapsed;
		if (x > xMax) {
			x = xMax + 85;
		}
	}
	sprite_.setPosition(sf::Vector2f(x, y));
}