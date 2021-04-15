#ifndef PLAYER_HPP
#define PLAYER_HPP
#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:
	Player();
	void display(sf::RenderWindow &window) const;
	void setPosition(float x, float y);
	void rotate(float a);
private:
	sf::Vector2f m_position;
	sf::ConvexShape m_rocket;
};

#endif