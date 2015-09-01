#pragma once
class BracketingSearch
{
public:
	BracketingSearch();
	BracketingSearch(int);
	~BracketingSearch();
	static int GetNumber();
	bool isNumber(int);
private:
	int numToGuess;
};

