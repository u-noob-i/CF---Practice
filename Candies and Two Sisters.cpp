#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		long long a;
		cin >> a;
		if (a == 1 || a == 2 || a == 0)
			cout << 0 << endl;
		else if (a % 2 == 0)
			cout << a / 2 - 1 << endl;
		else
			cout << a / 2 << endl;
	}
}