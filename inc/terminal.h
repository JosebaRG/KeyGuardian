typedef enum
{
	BLACK,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE
} TColor;

void terminal_clean ();
void terminal_format_reset ();
void terminal_text_color (TColor color);
