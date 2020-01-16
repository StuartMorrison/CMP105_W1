#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;

	sf::RectangleShape rect;
	sf::RectangleShape rect2;
	sf::RectangleShape rectS;
	sf::RectangleShape rectM;
	sf::RectangleShape rectL;
	sf::CircleShape circle;

	sf::Font font;
	sf::Text text;
};