#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int counter = 1;
	for (int i = 1; i <= 10; ++i)
	{
		if (i == 5)
		{
			continue;
		}
		cout << i << endl;
	}
	cout << "\n\n";
	while (counter <= 10)
	{
		if (counter == 5)
		{
			counter++; //Must increment the counter before continue
			continue;
		}
		cout << counter << endl;	
		counter++;
	}

	return 0;
}
