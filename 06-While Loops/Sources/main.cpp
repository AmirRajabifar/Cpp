#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int counter = 0; //counter
	while (counter < 5) //while the counter is less than the specifed limit
	{
		//do stuff
		cout << counter + 1 << ":\tHello there!!!" << endl;
		counter++;
	}
	return 0;
}