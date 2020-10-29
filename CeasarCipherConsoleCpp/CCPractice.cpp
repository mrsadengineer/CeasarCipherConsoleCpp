#include <iostream>
#include <string>


void printAllCharsFromInt() {

	for (size_t i = 0; i < 127; i++)
	{
		//127 is skipped but it's DEL
		std::cout << i << " - " << (char)i << std::endl;
	}

}

