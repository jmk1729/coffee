#include <stdio.h>
#include <stdlib.h>
#include <CommandLineInterface/CLIcore.h>


int main(int argc, char *argv[])
{
	char *AppName = "coffee";

//	printf("WELCOME to %s\n\n", AppName);
	runCLI(argc, argv, AppName);


	return 0;
}
