#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		for (long long i = 2; i < 30; i++)
		{
			long long k = pow(2, i) - 1;
			if (n % k == 0)
			{
				cout << n / k << endl;
				break;
			}
		}
	}
}