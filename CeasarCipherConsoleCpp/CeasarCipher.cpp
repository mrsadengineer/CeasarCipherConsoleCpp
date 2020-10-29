#include <iostream>
#include <string>




const int CAPTIAL_A = 65;
const int CAPITAL_Z = 90;

const int LOWERCASE_A = 97;
const int LOWERCASE_Z = 122;
void encryptCipher(std::string, int);

void processCipher() {
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



void encryptCipher(std::string toCipher, int offset) {
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


};





