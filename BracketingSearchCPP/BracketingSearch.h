#pragma once
class BracketingSearch
{
public:
	BracketingSearch();
	BracketingSearch(int);
	~BracketingSearch();
	static int GetNumber();
	bool GuessNumber(int);
private:
	int numToGuess;
	int currentGuesses;
};

