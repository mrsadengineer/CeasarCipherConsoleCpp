#pragma once
#include <iostream>
#include <string>

//Golbal consts for OOP

static const int CAPTIAL_A = 65;
static const int CAPITAL_Z = 90;
static const int LOWERCASE_A = 97;
static const int LOWERCASE_Z = 122;



class CeasarCipherClass
{
public:
	void startInteractiveConsole();
	void processCipher();
	void processDecipher();
	CeasarCipherClass();//default constructor
private:
	void decryptCipher(std::string, int);
	void encryptCipher(std::string, int);

	int storedKey;
};

