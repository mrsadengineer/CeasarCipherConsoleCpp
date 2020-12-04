#include "ceasarcypherscript.h"

void beginningWhileLoop() {
	int whatCommand;
	whatCommand = processCommand();
	while (whatCommand != 3)
	{
		switch (whatCommand)
		{
		case 1:
			processCipher();
			break;
		case 2:
			processDecipher();
			break;
		case 3:
			std::cout << "should exit\n";
			break;
		default:
			break;
		}
		whatCommand = processCommand();
	}
}

int processCommand() {
	int choice;
	std::cout << "Ceasar Cipher Console App!\n";
	std::cout << "Press 1 to Cipher\n";
	std::cout << "Press 2 to Decipher\n";
	std::cout << "Press 3 to exit\n";
	std::cin >> choice;
	return choice;
}