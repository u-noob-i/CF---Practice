#include<iostream>

using namespace std;

int main()
{
	long long k, n, w;
	cin >> k >> n >> w;
	long long cost = k * (w) * (w + 1) / 2;
	if (cost <= n)
	{
		cout << 0 << endl;
	}
	else if (cost > n)
	{
		cout << cost - n  << endl;
	}
}