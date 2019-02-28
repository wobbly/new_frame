#include <iostream>
#include "curses.h"

char take_input(bool& quit_thrown)
{
	quit_thrown = false;
	system ("clear");
	char input = getch();
	if (input = 'q')
		quit_thrown = true;
	return input;
}
