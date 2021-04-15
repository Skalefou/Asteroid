#include <SFML/Graphics.hpp>
#include "Player.hpp"

int main(void)
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	sf::RenderWindow window(sf::VideoMode(512, 512), "Asteroid!", sf::Style::Close, settings);
	Player player;

	while (window.isOpen())
	{
		sf::sleep(sf::microseconds(16'666));
		window.clear(sf::Color::Black);
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			window.close();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			player.rotate(1);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			player.rotate(-1);

		player.display(window);
		window.display();
	}

	return 0;
}
