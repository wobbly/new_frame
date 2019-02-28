#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

void generic_end(bool& quit_thrown)
{
	system ("clear");
	cout << "By hook or by crook, A Game has ended!\n";
	this_thread::sleep_for(chrono::seconds(3));
	system ("clear");
	cout << "quit thrown = " << quit_thrown << "\n";
	cout << "Goodbye!\n\n";
}
