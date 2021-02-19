//hunkar lule
#include <iostream>
using namespace std;

//int add(int a, int b)
//{
//	return a + b;
//}

//auto add(int a, int b) -> int
//{
//	return a + b;
//}

//template<typename Atype, typename Btype>
//auto add(Atype a, Btype b) -> decltype(a + b)
//{
//	return a + b;
//}

//unsigned int fact(unsigned int x)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * fact(x - 1);
//	}
//}

//void hanoi(int n, char ta, char tb, char tc)
//{
//	static int row = 1;
//	if (n == 1)
//	{
//		cout << row++ <<"- move from " << ta << " to " << tb << endl;
//	}
//	else
//	{
//		hanoi(n - 1, ta, tc, tb);
//		cout << row++ << "- move from " << ta << " to " << tb << endl;
//		hanoi(n - 1, tc, tb, ta);
//	}
//}


int main()
{
	//int x = 10;
	//int y = 20;
	//int z;

	//z = add(x, y);
	//cout << z << endl;

	//unsigned int v;
	//v = fact(4);

	//cout << v << endl;

	hanoi(4, 'A', 'B', 'C');

	return 0;

}