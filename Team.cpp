#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	if (2 * n < m - 2)
	{
		cout << -1;
	}
	else if (n > m + 1 && n + 1 > m)
	{
		cout << -1;
	}
	else
	{
		while (n > m)
		{
			cout << 0;
			n -= 1;
			if (n == m)
				break;
		}
		while (n < m)
		{
			if (m != 0)
			{
				cout << 1; 
				m -= 1;
			}
			if (m != 0)
			{
				cout << 1; 
				m -= 1;
			}
			if (n != 0)
			{
				cout << 0;
				n -= 1;
			}
		}
		while (n || m)
		{
			if (m != 0)
			{
				cout << 1;
				m -= 1;
			}
			if (n != 0)
			{
				cout << 0;
				n -= 1;
			}
		}
	}
}