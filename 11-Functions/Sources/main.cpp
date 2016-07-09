#include <iostream>
#include "function.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Hello from main\n";
	display();
	dis( 10, 25);
	
	cout << multi(23, 5) << endl;

	default_func(11, 20); //Third parameter is defualt (unchanged)
	default_func(5, 4, 32);
	return 0;
}
