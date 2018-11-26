#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wcfuncs.h"


int main (int argc, char **argv)
{
	FILE * fp;

	if (argc < 2)
	{
		fprintf(stderr, "Indique um ficheiro\n");
		exit(1);
	}

	fp = abreFicheiro(argv[1],"r");

	for (int i = 0; i < argc; i++)
	{
		printf("Parametro %d: %s\n", i, argv[i]);
	}


	fclose(fp);
        return 0;
}

