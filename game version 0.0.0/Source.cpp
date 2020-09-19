#include <SFML/Graphics.hpp>
#include <stdio.h>
int main()
{
	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game from scratch!");
	////// Texture
	sf::Texture playerTexture;
	playerTexture.loadFromFile("submarine1.png");
	if (!playerTexture.loadFromFile("submarine1.png"))
	{
		printf("Load failed");
	}

	////// Sprite
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);
	shapeSprite.setTextureRect(sf::IntRect(0, 0, 200, 200));

	while (window.isOpen())
	{
		window.draw(shapeSprite);
		window.display();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			shapeSprite.move(.5f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			shapeSprite.move(-.5f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			shapeSprite.move(0.f, -.5f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			shapeSprite.move(0.f, .5f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		window.clear();
	}
	return 0;
}