//hunkar lule
#include <iostream>

using namespace std;

void add(int a, int b)
{
	cout << a << "+" << b << "=" << (a + b) << endl;
}

void sub(int a, int b)
{
	cout << a << "-" << b << "=" << (a - b) << endl;
}

void mul(int a, int b)
{
	cout << a << "*" << b << "=" << (a * b) << endl;
}

void divid(int a, int b)
{
	cout << a << "/" << b << "=" << (a / b) << endl;
}

int main()
{
	void (*addptr)(int, int) = divid;
	addptr(20, 10);

	void (*func[4])(int a, int b) = {add, sub, mul, divid};
	for (int i = 0; i < 4; i++)
	{
		func[i](10, 2);
	}


	return 0;
}