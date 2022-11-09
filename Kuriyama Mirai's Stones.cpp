#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long* sorted = new long long[n];
	long long* prefixarr = new long long[n];
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		long long a;
		cin >> a;
		sum += a;
		prefixarr[i] = sum;
		sorted[i] = a;
	}
	sort(sorted, sorted + n);
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		sorted[i] += sum;
		sum = sorted[i];
	}
	int m;
	cin >> m;
	while (m--)
	{
		int test, l, r;
		cin >> test >> l >> r;
		if (test == 1)
		{
			if(l - 1 == 0)
				cout<< prefixarr[r - 1] << endl;
			else
				cout << prefixarr[r - 1] - prefixarr[l - 2] << endl;
		}
		else
		{
			if (l - 1 == 0)
				cout << sorted[r - 1] << endl;
			else
			    cout << sorted[r - 1] - sorted[l - 2] << endl;
		}
	}
}