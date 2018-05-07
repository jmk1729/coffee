#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <CommandLineInterface/CLIcore.h>


#include <image_basic/image_basic.h>
#include <image_format/image_format.h>
#include <img_reduce/img_reduce.h>
#include <psf/psf.h>
#include <ZernikePolyn/ZernikePolyn.h>
#include <linopt_imtools/linopt_imtools.h>
#include <linARfilterPred/linARfilterPred.h>
#include <cudacomp/cudacomp.h>
#include <PIAACMCsimul/PIAACMCsimul.h>


#define STYLE_BOLD    "\033[1m"
#define STYLE_NO_BOLD "\033[22m"

DATA data;

int main(int argc, char *argv[])
{
	char *AppName = "coffee";

	printf(STYLE_BOLD);
	printf("\n        Coronagraph Optimization For Fast Exoplanet Exploration (coffee)\n");
	printf(STYLE_NO_BOLD);
	
	strcpy(data.package_name, PACKAGE_NAME);
	strcpy(data.package_version, PACKAGE_VERSION);
	strcpy(data.sourcedir, SOURCEDIR);
	strcpy(data.configdir, CONFIGDIR);


	printf("\n");
	printf("        %s version %s\n", data.package_name, data.package_version);
	printf("        GNU General Public License v3.0\n");
	printf("        Report bugs to : %s\n", PACKAGE_BUGREPORT);
    printf("        Type \"help\" for instructions\n");
	printf("        \n");

	
	
	// initialize milk modules for which no function calls is included by default
	libinit_image_basic();
	libinit_image_format();
	libinit_psf();
	libinit_img_reduce();
	libinit_linopt_imtools();
	libinit_linARfilterPred();
	libinit_ZernikePolyn();
	libinit_cudacomp();
	
	libinit_PIAACMCsimul();
	
	runCLI(argc, argv, AppName);

	return 0;
}
