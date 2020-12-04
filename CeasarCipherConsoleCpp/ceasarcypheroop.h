#pragma once
#include "CeasarCipherAppGlobal.h"

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
	void beginningWhileLoopforOop();
//	int storedKey;
};

