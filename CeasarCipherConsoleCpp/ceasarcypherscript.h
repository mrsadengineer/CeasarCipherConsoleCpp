#pragma once
#include "CeasarCipherAppGlobal.h"
// user interaction
int mainCeasarCipherScript();
int processCommand();
void beginningWhileLoop();


// Ceasar Cipher Class methods
void processCipher();
void processDecipher();

//Ceasar Cipher Recursieve Function candadites
void encryptCipher(std::string, int);
void decryptCipher(std::string, int);