#pragma once
#include "AssetManager.h"

class ScrollBar
{
private:
	sf::RectangleShape scrollbarBackground;
	sf::RectangleShape scrollbarHandle;

	float maxHandleOffset = 0;
	float scrollAmount = 0;
	float currentHandleOffset = 0;
	float newHandleOffset = 0;
	float handleHight = 0;

	std::string type;

	sf::RenderWindow& window;

	bool isDragging = false;
	sf::Vector2f dragOffset;

	int& counter;

public:

	ScrollBar(sf::Vector2f position, float height, int howManyOptions, sf::Color backgroundColor, sf::Color handleColor, std::string type, sf::RenderWindow& window, int& counter);

	void Update(sf::Event event, int maxCounter, int minCounter);

	void Draw();
};