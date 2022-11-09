#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n % 4 == 0)
		{
			cout << "YES" << endl;
			for (int i = 2; i <= n;)
			{
				cout << i << " ";
				i += 2;
			}
			cout << 1 << " " << n - 1 + ( n / 2 ) << " ";
			for (int i = 3; i < n - 1;)
			{
				cout << i << " ";
				i += 2;
			}
			cout << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}