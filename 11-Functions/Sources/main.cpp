#include <iostream>
#include "function.h"

using namespace std;


//inline functions are used for really short functions

inline void add (int a, int b)
{
	cout << a + b << endl;
}

int main(int argc, char const *argv[])
{
	cout << "Hello from main\n";
	display();
	dis( 10, 25);
	
	cout << multi(23, 5) << endl;

	default_func(11, 20); //Third parameter is defualt (unchanged)
	default_func(5, 4, 32);

	add(25, 15); //in-line function
	return 0;
}
