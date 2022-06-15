#include "Backround.h"
#include <iostream>
#include "GameScene.cpp"
#include "Explosion.h"
#include "Laser.h"

const float SPEED = 0.3f;

Backround::Backround(sf::Vector2f pos) {
	sprite_.setTexture(GAME.getTexture("Resources/Backround.png"));
	sprite_.setPosition(pos);
	assignTag("Backround");
}

void Backround::draw() {
	GAME.getRenderWindow().draw(sprite_);
}

void Backround::update(sf::Time& elapsed) {
	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();

	if (pos.x < sprite_.getGlobalBounds().width * -1) {
		makeDead();
	}
	else {
		sprite_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
	}
}