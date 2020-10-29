#include <iostream>
#include <string>





void proccessCipher(std::string toCipher, int offset) {

};


void processCipher() {
	int offset;
	std::string stringtoencrypt;

	std::cout << "lets cipher something\n";
	std::cout << "give the number of offset\n";


	std::cin >> offset;

	std::cout << "\n what do you want to encrypt" << std::endl;

	std::getline(std::cin, stringtoencrypt);
	std::getline(std::cin, stringtoencrypt);


	std::cout << "\n here" << std::endl;

	std::cout << std::endl << stringtoencrypt << std::endl;

}