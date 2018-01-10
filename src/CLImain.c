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
	
	// initialize milk modules for which no function calls is included by default
	libinit_image_basic();
	libinit_image_format();
	libinit_psf();
	libinit_img_reduce();
	libinit_linARfilterPred();
	libinit_ZernikePolyn();
	
	
	
	runCLI(argc, argv, AppName);

	return 0;
}
