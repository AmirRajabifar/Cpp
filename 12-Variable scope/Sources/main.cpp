#include <iostream>

using namespace std;

//function prototype
void display ();
int x = 100; //global var

int main(int argc, char const *argv[])
{
	display();
	cout << "main function x = " << x << endl;
	{
		int p = 20; //block var
		cout << "block var = " << p << endl;
	}
	return 0;
}

void display ()
{
	int a = 10, b = 20; //local var
	cout << a << " " << b << endl;
	cout << "display function x = " << x << endl;
}
