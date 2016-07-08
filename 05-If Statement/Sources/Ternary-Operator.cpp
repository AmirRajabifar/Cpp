#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int mark;
	cout << "Enter your mark: " << flush;
	cin >> mark;
	mark >= 35 ? cout << "you have passed\n": cout << "you have failed\n";
	return 0;
}