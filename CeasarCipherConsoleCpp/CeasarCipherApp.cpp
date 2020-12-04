//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
#include "ceasarcypheroop.h"
#include "ceasarcypherscript.h"
#include <vector>


int main(int argc, char* argv[]) {

	if (argc >= 2)
	{
		printf("%i number of arguments.\n", argc);
		printf(argv[1]);
		std::vector<std::string> args(argv, argv + argc);
		for (size_t i = 1; i < args.size(); i++)
		{
			//strcmp is zero if the 2 strings are the same.
			if ((!strcmp(argv[1], "oop")))
			{
				printf("oop start here ... ");
				CeasarCipherClass ccc;
				ccc.startInteractiveConsole();
			}
			else if ((!strcmp(argv[1], "script")))
			{
				printf("script start here ...");
				beginningWhileLoop();//start interactive script

			}
			else if ((!strcmp(argv[1], "clibrary")))
			{
				printf("clibrary was slected");
			}
			else {
				printf(argv[1]);
				printf("Going with the default... \n");
			}
		}
	}
	printf("no arguments selected or end of program");
	return 0;
}
