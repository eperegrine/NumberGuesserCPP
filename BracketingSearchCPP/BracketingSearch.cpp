#include "stdafx.h"
#include "BracketingSearch.h"


BracketingSearch::BracketingSearch()
{
	this->numToGuess = BracketingSearch::GetNumber();
}

BracketingSearch::BracketingSearch(int _numToGuess)
{
	this->numToGuess = _numToGuess;
}


BracketingSearch::~BracketingSearch()
{
}

int BracketingSearch::GetNumber() {
	int number = -1;
	do {
		std::cout << "Please Enter a number between 0 and 100";
		int val;
		std::cin >> val;
	} while (!(number >= 0 && number <= 100));
	return 0;
}

bool BracketingSearch::GuessNumber(int num) 
{
	currentGuesses++;
	return num == this->numToGuess;
}