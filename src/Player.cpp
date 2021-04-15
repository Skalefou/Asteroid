#include "Player.hpp"

Player::Player() : m_position(256.f, 256.f)
{
	setPosition(256.f, 256.f);
	m_rocket.setPointCount(3);
	m_rocket.setPoint(0, sf::Vector2f(10.f, 0.f));
	m_rocket.setPoint(1, sf::Vector2f(0.f, 30.f));
	m_rocket.setPoint(2, sf::Vector2f(20.f, 30.f));
	m_rocket.setPosition(sf::Vector2f((256 - m_rocket.getGlobalBounds().width / 2), (256 - m_rocket.getGlobalBounds().height / 2)));
	m_rocket.setOrigin(sf::Vector2f(m_rocket.getGlobalBounds().width / 2, m_rocket.getGlobalBounds().height / 2));
}

void Player::display(sf::RenderWindow& window) const
{
	window.draw(m_rocket);
}

void Player::setPosition(float x, float y)
{
	m_position.x = x;
	m_position.y = y;
}

void Player::rotate(float a)
{
	m_rocket.rotate(a);
}