#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 10; ++i)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
	}
	cout << "\n";
	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 1; j <= 3; ++j)
		{
			cout << j << endl;
			if (j == 2)
			{
				break;
			}
		}
		cout << "\n";
		cout << "\n";
	}
	return 0;
}

/*
breaks the loop
*/
