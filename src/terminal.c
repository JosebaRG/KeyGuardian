#include <stdio.h>
#include "terminal.h"

void terminal_clean ()
{
	//Clean screen
	printf("\033[2J");
	//Cursor to top-left
	printf("\033[H");
}

void terminal_format_reset ()
{
	printf("\033[0m");
}

void terminal_text_color (TColor color)
{
	switch (color)
	{
		case BLACK:
			printf("\033[30m");
			break;
		case RED:
			printf("\033[31m");
			break;
		case GREEN:
			printf("\033[32m");
			break;
		case YELLOW:
			printf("\033[33m");
			break;
		case BLUE:
			printf("\033[34m");
			break;
		case MAGENTA:
			printf("\033[35m");
			break;
		case CYAN:
			printf("\033[36m");
			break;
		case WHITE:
			printf("\033[37m");
			break;

		default:
			printf("Unknown color\n");
			break;
	}
}
