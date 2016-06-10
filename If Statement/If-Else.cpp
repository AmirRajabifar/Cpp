#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int value;
	//A menu
	cout << "1.\tAdd name recorde." << endl;
	cout << "2.\tDelete recorde." << endl;
	cout << "3.\tView recorde." << endl;
	cout << "4.\tSearch recorde." << endl;
	cout << "5.\tQuit." << endl;
	//ask user for their slection
	cout << "Enter your slection >  " << flush;
	//read user input
	cin >> value;
	//take action based on user input
	/*
	if (value < 3)
	{
		cout << "Insufficient privilages to use these menu options." << endl;
	}
	else 
	{
		cout << "privilage level sufficient." << endl;
	}
	*/
	if (value == 1)
	{
		cout << "Adding new recorde..." << endl;
	}
	else if (value == 2)
	{
		cout << "Deleting recorde..." << endl;
	}
	else if (value == 3)
	{
		cout << "Viewing recorde..." << endl;
	}
	else if (value == 4)
	{
		cout << "Serching recorde..." << endl;
	}
	else if (value == 5)
	{
		cout << "Quiting..." << endl;
	}
	else
	{
		cout << "Invalid option" << endl;
	}
	return 0;
}