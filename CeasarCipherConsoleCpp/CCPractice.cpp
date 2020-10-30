#include <iostream>
#include <string>

//void printAllCharsFromInt();
void printAllCharsFromInt() {

	for (size_t i = 0; i < 127; i++)
	{
		//127 is skipped but it's DEL
		std::cout << i << " - " << (char)i << std::endl;
	}

}


//char a = 'A';

//std::cout << (int)a << std::endl;


//a += 28;


//std::cout << a;


//printAllCharsFromInt();