// CeasarCipherConsoleCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int processCommand();

void processCipher() {
    int offset;
    std::string stringtoencrypt;

    std::cout << "lets cipher something\n";
    std::cout << "give the number of offset\n";


    std::cin >> offset;

    std::cout << "\n what do you want to encrypt" << std::endl;

std::getline(std::cin, stringtoencrypt);


    std::cout << "\n here" << std::endl;

    std::cout << std::endl << stringtoencrypt << std::endl;

}

int main()
{

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
            std::cout << "lets decipher something\n";
            break;
        case 3:
            std::cout << "should exit\n";
            break;
        default:
            break;
        }

        whatCommand = processCommand();
    }


    return 0;

        
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
