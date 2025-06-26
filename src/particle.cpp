#include <SFML/Graphics.hpp>

class particle{
public:
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Color color;

	particle(sf::Vector2f position, sf::Vector2f velocity, sf::Color color) {
		this->position = position;
		this->velocity = velocity;
		this->color = color;
	}

};