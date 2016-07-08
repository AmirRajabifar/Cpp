#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string input;
	int age;

	cout << "Enter your name: " << flush; //ask a question from user
	cin >> input;	// get user input
	cout << "Enter your age: " << flush;
	cin >> age;
	cout << "You entered: " << endl; //report back the result
	cout << "Name: " << input << "\nAge: " << age << endl;
	return 0;
}
