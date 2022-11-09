#include<iostream>
using namespace std;



int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, k;
		cin >> n >> k;
		if (k < n)
			cout << k << endl;
		else if (k == n)
			cout << n + 1 << endl;
		else
		{
			long long sum = k + (k / n);
			long long p = (k + (k / n)) / n - (k / n);
			long long before = p;
			while (p)
			{
				before = p;
				p = (sum + p) / n - sum / n;
				sum += before;
			}
			if (sum % n == 0)
				cout << sum + 1 << endl;
			else
				cout<<sum<<endl;
		}
	}
}
