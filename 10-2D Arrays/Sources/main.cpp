#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int marks [2][6] = 
	{
		{1,2,3,4,5,6}, 
		{9,8,7,6,5,4}
	};

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			cout << marks[i][j] <<  " " <<flush;	
		}
		cout << '\n';
	}
	return 0;
}