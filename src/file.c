#include <stdio.h>
#include <stdlib.h>

#include "libtypes.h"

int8_t file_read (char * file_name, char ** p_encripted)
{
	FILE *file = fopen (file_name, "rb");

	if (file == NULL)
	{
		printf ("\nError opening the file");
		return -1;
	}

	fseek (file, 0, SEEK_END);
	uint64_t fileSize = ftell (file);
	fseek (file, 0, SEEK_SET);

	if (* p_encripted != NULL)
	{
		free (* p_encripted);
		* p_encripted = NULL;
	}

    * p_encripted = (char *) malloc (fileSize);
    
	if (* p_encripted == NULL)
	{
		printf("Error allocating memory\n");
		fclose(file);
		return -1;
	}

	fread (* p_encripted, 1, fileSize, file);

	fclose (file);

	return 0;
}
