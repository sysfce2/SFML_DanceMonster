#pragma once
#include "Note.h"

class BarOfNotes
{
private:
	std::vector<sf::RectangleShape> bar;
	std::vector<Note> notes;
	sf::RenderWindow& window;
	AssetManager& assetManager;
	sf::Clock clock;
	int howMuchToAdd = 15;

public:
	BarOfNotes(sf::RenderWindow& window, AssetManager& assetManager);

	void NewNote();
	void Update(float dt, int& combo);
	bool Check(std::string noteType);
	bool stop;
	Note* notesGoodClick;
	void IncreaseWhiteShape();
	int speed;
	void ChangeSpeed(int newSpeed);
	void DrawBar();
};