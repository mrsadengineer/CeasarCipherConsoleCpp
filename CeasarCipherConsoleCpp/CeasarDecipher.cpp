#include <iostream>
#include <string>
#include "ceasarcypherscript.h"


void processDecipher() {
	int offset;
	std::string stringToDecrypt;

	std::cout << "lets decipher something\n";
	std::cout << "give the number of offset. (1-26)\n";
	std::cin >> offset;
	std::cout << "\n what do you want to decrypt\n" << std::endl;
	std::getline(std::cin, stringToDecrypt);
	std::getline(std::cin, stringToDecrypt);
	decryptCipher(stringToDecrypt, offset);
	std::cout << std::endl << stringToDecrypt << std::endl;
}


void decryptCipher(std::string toCipher, int offset) {
	std::string newEncrytpedString;
	if (offset >= 1 && offset <= 26) {
		for (size_t i = 0; i < toCipher.length(); i++)
		{
			char letter = toCipher.at(i);
			if (isupper(letter))
			{
				letter -= offset;
				if (letter < CAPTIAL_A)
				{
					letter += 26;
				}
			}
			else if (islower(letter))
			{
				letter -= offset;
				if (letter < LOWERCASE_A)
				{
					letter += 26;
				}
			}
			newEncrytpedString.append(1, (char)letter);
		}
	}
	else {
		std::cout << "the offset is out of bound" << std::endl;
	}
	std::cout << "your encrypted string is as follow: \n";
	std::cout << newEncrytpedString << std::endl;
};

