/*
	A program that ask the user for a password and checks if the 
	input is correct or not.
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string password = "hello";	//string to hold the password
	string input = "";	//string for user input
	//ask user to input a password
	cout << "Enter your password >  " << flush;
	cin >> input;
	if (input == password) // == equal
	{
		cout << "you are in" << endl;
	}
	if (input != password) // != not equal
	{
		cout << "permission denied" << endl;
	}
//debug
	//cout << "'" << input << "'" << endl;
	return 0;
}