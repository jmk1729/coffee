#include <stdio.h>
#include <stdlib.h>
#include <CommandLineInterface/CLIcore.h>

#define STYLE_BOLD    "\033[1m"
#define STYLE_NO_BOLD "\033[22m"


int main(int argc, char *argv[])
{
	char *AppName = "coffee";

	printf(STYLE_BOLD);
	printf("\n        Coronagraph Optimization For Fast Exoplanet Exploration (coffee)\n");
	printf(STYLE_NO_BOLD);
	
	runCLI(argc, argv, AppName);

	return 0;
}
