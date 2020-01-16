#include "Level.h"


Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(50, 50));
	rect2.setFillColor(sf::Color::Green);

	rectL.setSize(sf::Vector2f(150, 150));
	rectL.setPosition(300, 300);
	rectL.setFillColor(sf::Color::Red);

	rectM.setSize(sf::Vector2f(100, 100));
	rectM.setPosition(325, 325);
	rectM.setFillColor(sf::Color::Green);

	rectS.setSize(sf::Vector2f(50, 50));
	rectS.setPosition(350, 350);
	rectS.setFillColor(sf::Color::Blue);

	circle.setRadius(50);
	circle.setPosition(550, 287.5);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
		circle.setOutlineThickness(2.f);


}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	
	rect2.setPosition(pos.x - 50, pos.y - 50);

}

// Render level
void Level::render()
{
	beginDraw();

	//render text
	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Yellow);
	text.setPosition(560, 0);

	window->draw(rect);
	window->draw(rect2);
	window->draw(circle);

	window->draw(rectL);
	window->draw(rectM);
	window->draw(rectS);

	window->draw(text);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}