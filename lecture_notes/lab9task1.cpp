#include <iostream>
using namespace std;

int add(int a = 0, int b = 0)
{
	return a + b;
}


int main()
{
	cout << add(24, 45);
}
