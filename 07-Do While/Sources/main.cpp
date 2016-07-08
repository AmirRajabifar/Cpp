#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char input;
	do 
	{
		cout << "Welcome to C++"<< endl;

		cout << "Enter x to exit ot any other key to see this again\n";
		cin >> input;
	} while (input != 'x');

	return 0;
}