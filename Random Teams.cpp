#include<iostream>
using namespace std;

long long comb(long long n)
{
	long long k = n * (n - 1) / 2;
	return k;
}
int main()
{
	long long n, m;
	cin >> n >> m;
	long long min = ((m - (n % m)) * comb(n / m)) + ((n % m) * comb(n / m + 1));
	long long max = comb(n - m + 1);
	cout << min << " " << max << endl;
}