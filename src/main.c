#include <stdio.h>
#include "terminal.h"
#include "libtypes.h"
#include "file.h"

void main ()
{
	int8_t res = 0;

	char * ptr_file_content = NULL;

	res = file_read ("./passwords.kg", & ptr_file_content);

	printf ("\n%s", ptr_file_content);
}
