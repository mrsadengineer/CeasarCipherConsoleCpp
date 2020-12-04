
#include "ceasarcypheroop.h"//iostream //string

int processCommandForOPP();
//void beginningWhileLoopforOop();

CeasarCipherClass::CeasarCipherClass()
{
}

void CeasarCipherClass::startInteractiveConsole()
{
	beginningWhileLoopforOop();
}

void CeasarCipherClass::processCipher()
{
	int offset;
	std::string stringtoencrypt;

	std::cout << "lets cipher something\n";
	std::cout << "give the number of offset. (1-26)\n";


	std::cin >> offset;

	std::cout << "\n what do you want to encrypt\n" << std::endl;

	std::getline(std::cin, stringtoencrypt);
	std::getline(std::cin, stringtoencrypt);

	encryptCipher(stringtoencrypt, offset);


	std::cout << std::endl << stringtoencrypt << std::endl;

}

inline void CeasarCipherClass::processDecipher()
{
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

inline void CeasarCipherClass::decryptCipher(std::string toCipher, int offset)
{
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

}

inline void CeasarCipherClass::encryptCipher(std::string toCipher, int offset)
{
	std::string newEncrytpedString;

	if (offset >= 1 && offset <= 26) {

		for (size_t i = 0; i < toCipher.length(); i++)
		{
			char letter = toCipher.at(i);

			if (isupper(letter))
			{
				letter += offset;
				if (letter > CAPITAL_Z)
				{
					letter -= 26;
				}
			}
			else if (islower(letter))
			{
				letter += offset;
				if (letter > LOWERCASE_Z)
				{
					letter -= 26;
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

}

void CeasarCipherClass::beginningWhileLoopforOop() {


	int whatCommand;
	whatCommand = processCommandForOPP();

	while (whatCommand != 3)
	{
		switch (whatCommand)
		{
		case 1:
			this->processCipher();
			//processCipher();
			break;
		case 2:
			this->processDecipher();
			//processDecipher();
			break;
		case 3:
			std::cout << "should exit\n";
			break;
		default:
			break;
		}

		whatCommand = processCommandForOPP();
	}
}
int processCommandForOPP() {
	int choice;
	std::cout << "Ceasar Cipher OOP App!\n";
	std::cout << "Press 1 to Cipher\n";
	std::cout << "Press 2 to Decipher\n";
	std::cout << "Press 3 to exit\n";
	std::cin >> choice;
	return choice;

}