#pragma once
#include <iostream>
#include <string>

//Golbal consts for Script

static const int CAPTIAL_A = 65;
static const int CAPITAL_Z = 90;
static const int LOWERCASE_A = 97;
static const int LOWERCASE_Z = 122;

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