#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long max = 0;
		long long chance = 1;
		while (n)
		{
			if (chance % 2 == 1)
			{
				if (n % 4 == 0 && n > 8)
				{
					n -= 1;
					max += 1;
				}
				else if (n % 2 == 0)
				{
					n -= n / 2;
					max += n;
				}
				else
				{
					n -= 1;
					max += 1;
				}
			}
			else
			{
				if (n % 4 == 0 && n > 8)
				{
					n -= 1;
				}
				else if (n % 2 == 0)
				{
				    n -= n / 2;
				}
				else
				{
				    n -= 1;
				}
			}
			chance++;
		}
		cout << max << endl;
	}
}