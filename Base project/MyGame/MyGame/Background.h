
#pragma once
#include "Engine/GameEngine.h" 

class Backround : public GameObject
{
public:
	//Creates Backround 
	Backround(sf::Vector2f pos);

	// Functions overridn from GameObject 
	void draw();
	void update(sf::Time& elapsed);


private:
	sf::Sprite sprite_;

};

typedef std::shared_ptr<Backround> BackroundPtr;