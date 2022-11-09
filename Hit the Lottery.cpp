#include<iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	int bills = 0;
	while ((n - 100)>= 0)
	{
		bills += 1;
		n -= 100;
	}
	while ((n - 20)>= 0)
	{
		bills += 1;
		n -= 20;
	}
	while ((n - 10)>= 0)
	{
		bills += 1;
		n -= 10;
	}
	while ((n - 5)>= 0)
	{
		bills += 1;
		n -= 5;
	}
	while ((n - 1)>= 0)
	{
		bills += 1;
		n -= 1;
	}
	cout << bills << endl;
}