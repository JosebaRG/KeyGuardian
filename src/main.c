#include <stdio.h>
#include "terminal.h"

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
}

