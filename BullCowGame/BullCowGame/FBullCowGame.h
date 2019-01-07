#pragma once
#include <string>

class FBullCowGame {
public:
	int GetMaxTries() const;
	int GetCurrentTry() const;

	void Reset(); // TODO make a more rich return value
	bool IsGameWon();
	bool CheckGuessValidity(std::string);

private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};