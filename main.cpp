#include "input.hpp"
#include "matrix.hpp"
#include "quit.hpp"

int main()
{
	bool quit_thrown = false;
	char input;
//  Main loop
	init_matrix();
	do
	{
		draw_matrix();
		input = take_input(quit_thrown);
		change_matrix();
//debug
		quit_thrown = true;
	}
	while (quit_thrown == false);
	generic_end(quit_thrown);
	return 0;
}
