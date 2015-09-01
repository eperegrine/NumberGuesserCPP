// BracketingSearchCPP.cpp : Defines the entry point for the console application.
#include "stdafx.h"

using std::cout;
using std::cin;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Welcome to the number guesser!" << endl;
	cout << "Please enter a number for the computer to guess \nIt must be between 1 and 100\n";
	
	int numToGuess;
	cin >> numToGuess;
	cout << endl;
	
	cout << numToGuess << endl;

	cin.clear();
	cin.ignore(1000, '\n');

	MiscFuncs::Pause();
	return 0;
}