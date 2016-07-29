#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char value = 0;
	while (1)
	{
		cout << "Enter your grade (A, B, C, ...): " << flush;
		cin >> value;
		switch (value)
		{
			case 'A':
			case 'a':
				cout << "Excellent" << endl;
				break;
			case 'B':
			case 'b':
				cout << "Very good" << endl;
				break;
			case 'C':
			case 'c':
				cout << "good" << endl;
				break;
			case 'D':
			case 'd':
				cout << "Not bad" << endl;
				break;
			default:
				cout << ":`(" << endl;
		}
	}	
	return 0;
}
