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

template<typename Atype, typename Btype>
auto add(Atype a, Btype b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	int x = 10;
	int y = 20;
	int z;

	z = add(x, y);
	cout << z << endl;

	return 0;

}