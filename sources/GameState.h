#pragma once
#include "State.h"
#include "Game.h"
#include "BarOfNotes.h"
#include "Monster.h"
#include "Music.h"
#include "Combo.h"
#include "Widgets.h"

class GameState :public State
{
public:
	GameState(GameDataReference data, sf::Sound* menuSound, sf::Music* menuBackgroundMusic);

	void Init();

	void AddPoints();

	void HandleInput();
	void Update();
	void Draw();

private:

	GameDataReference data;
	sf::Sound* menuSound;
	sf::Music* menuBackgroundMusic;

	BarOfNotes* barOfNotes;
	Monster* monster;
	Music* music;
	Combo* combos;

	sf::Clock dtClock;
	sf::Clock clock;
	sf::Clock frameClock;
    sf::Clock helperClock;
	sf::Clock combosClock;

    bool start = true;
    bool errorStart = false;
	bool errorStop = false;
	bool fail = false;
	bool canCheckArrow = true;

	bool stopCombo = false;
	int maxCombo = 0;
	int counter = 0;
	int combo = 0;
	sf::Text comboText;
	sf::Clock comboClock;
	bool comboCounter = true;
	int helperCombo = 0;
	sf::Color backgroundColor = sf::Color(0x1A1A1Aff);

	sf::Text pointsText;

	sf::SoundBuffer errorSoundBuffer;
	sf::SoundBuffer comboSoundBuffer;
	sf::Sound errorSound;
	sf::Sound comboSound;
	bool playComboSound = false;

	std::vector<bool> optionsFromFile;
	std::vector<int> musicOptionsFromFile;
};