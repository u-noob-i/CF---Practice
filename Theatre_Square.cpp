#include<iostream>

using namespace std;

int main()
{
	long long int a, b, c, l, w;
	cin >> a >> b >> c;
	if (a % c == 0)
	{
		l = (a / c);
	}
	else
	{
		l = (a / c) + 1;
	}
	if (b % c == 0)
	{
		w = b / c;
	}
	else
	{
		w = (b / c) + 1;
	}
	cout << l * w;
}
