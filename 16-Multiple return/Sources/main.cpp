#include <iostream>
#include "func.h"

using namespace std;

int main(int argc, char const *argv[])
{
	bool myAge;
	int age;
	cout << "Enter your age: " << flush;
	cin >> age;
	myAge = checkAge(age);
	if (myAge == true)
	{
		cout << "You are an adult\n";
	}
	else 
	{
		cout << "You are not an adult\n";
	}
	return 0;
}
