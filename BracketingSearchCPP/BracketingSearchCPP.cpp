// BracketingSearchCPP.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "BracketingSearch.h"

using std::cout;
using std::cin;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Welcome to the number guesser!" << endl;
	
	BracketingSearch bs (50);

	while (true) {
		cout << "Guess a Number: ";
		int numToGuess;
		cin >> numToGuess;

		bool correct = bs.GuessNumber(numToGuess);
		cout << (correct ? "true" : "false") << endl;

		if (correct) {
			cout << "Congrats, you guessed it!" << endl;
			break;
		}
	}
	
	//cout << numToGuess << endl;

	cin.clear();
	cin.ignore(1000, '\n');

	MiscFuncs::Pause();
	return 0;
}