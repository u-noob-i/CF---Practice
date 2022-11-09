#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> b >> a;
	int year = 0;
	while (a >= b)
	{
		a *= 2;
		b *= 3;
		year += 1;
	}
	cout << year;
}