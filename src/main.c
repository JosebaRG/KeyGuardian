#include <stdio.h>
#include "terminal.h"
#include "libtypes.h"

void test_bin ()
{
	uint8_t numbers[] = {1, 0, //version
		0, //group 0
		5, //group 0 name length
		1,2,3,4,5, //5 chars
		2, //2 keys in this group
		2, //key 0 name legth
		1,2, //2chars
		2, //user 0 legth
		3,4, //2chars
		2, //password 0 legth
		5,6, //2chars
		2, //key 1 name legth
		11,12, //2chars
		2, //user 1 legth
		13,14, //2chars
		2, //password 1 legth
		15,16, //2chars
		1, //group 1
		5, //group 1 name length
		6,7,8,9,10, //5 chars
		2, //3 keys in this group
		2, //key 0 name legth
		21,22, //2chars
		2, //user 0 legth
		23,24, //2chars
		2, //password 0 legth
		25,26, //2chars
		2, //key 1 name legth
		31,32, //2chars
		2, //user 0 legth
		33,34, //2chars
		2, //password 0 legth
		35,36, //2chars
		2, //key 0 name legth
		41,42, //2chars
		2, //user 0 legth
		43,44, //2chars
		2, //password 0 legth
		45,46 //2chars
		,1,2,3
	};

	FILE *file = fopen("clear.bin", "wb");

	uint32_t numNumbers = sizeof(numbers) / sizeof(numbers[0]);
/*
	for (uint32_t i = 0; i < numNumbers; i++)
		fwrite(&numbers[i], sizeof(numbers[0]), 1, file);
*/
	fwrite(&numbers, sizeof(numbers[0]), numNumbers, file);

    fclose(file);
}

void main ()
{
	printf ("\nEmpieza el programa");

	terminal_clean ();

	printf ("\ndsafsdfasdfasdasdf");
	terminal_text_color (BLACK);
	printf ("\ndsafsdfasdfasdasdf");
	terminal_text_color (RED);
	printf ("\ndsafsdfasdfasdasdf");
	terminal_text_color (GREEN);
	printf ("\ndsafsdfasdfasdasdf");
	terminal_text_color (YELLOW);
	printf ("\ndsafsdfasdfasdasdf");
	terminal_text_color (BLUE);
	printf ("\ndsafsdfasdfasdasdf");
	terminal_text_color (MAGENTA);
	printf ("\ndsafsdfasdfasdasdf");
	terminal_text_color (CYAN);
	printf ("\ndsafsdfasdfasdasdf");
	terminal_text_color (WHITE);
	printf ("\ndsafsdfasdfasdasdf");
	terminal_format_reset ();
	printf ("\ndsafsdfasdfasdasdf");
	printf ("\n");

	test_bin ();
}

