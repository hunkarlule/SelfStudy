//hunkar lule
#include <iostream>
#include <string>
#include <cstring>
#include "Int.h"
using namespace std;
//
//using namespace std;
//
//void add(int a, int b)
//{
//	cout << a << "+" << b << "=" << (a + b) << endl;
//}
//
//void sub(int a, int b)
//{
//	cout << a << "-" << b << "=" << (a - b) << endl;
//}
//
//void mul(int a, int b)
//{
//	cout << a << "*" << b << "=" << (a * b) << endl;
//}
//
//void divid(int a, int b)
//{
//	cout << a << "/" << b << "=" << (a / b) << endl;
//}

bool validAge(int val, string& errorMessage)
{
	bool res = false;
	if (val < 19)
	{
		errorMessage = "too young to drink!";
	}
	else if (val > 110)
	{
		errorMessage = "seems a fake age, please enter again: ";
	}
	else
	{
		res = true;
		errorMessage = "";
	}
	return res;
}

bool validMark(int val, string& errorMessage)
{
	bool res = true;
	if (val < 0 || val > 100)
	{
		errorMessage = "Invalid mark value, [0<=mark<=100]: ";
		res = false;
	}
	else
	{
		errorMessage = "";
	}
	return res;
}


int main()
{
	//void (*addptr)(int, int) = divid;
	//addptr(20, 10);

	//void (*func[4])(int a, int b) = { add, sub, mul, divid };
	//for (int i = 0; i < 4; i++)
	//{
	//	func[i](10, 2);
	//}

	Int val(0, validAge);
	cout << "Age please: ";
	cin >> val;
	cout << val << " is a valid age" << endl;

	val.set(validMark);
	cout << "Mark please: ";
	cin >> val;
	cout << val << " is a valid mark" << endl;

	return 0;
}