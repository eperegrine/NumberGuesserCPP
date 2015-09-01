#include "stdafx.h"
#include "MiscFuncs.h"

namespace MiscFuncs 
{
	void Pause()
	{
		std::cout << "Press any key to continue... ";
		std::cin.get();
	}

	void Pause(std::string message)
	{
		std::cout << message;
		std::cin.get();
	}
}