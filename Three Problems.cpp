#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long t = n;
	int count = 0;
	while (n)
	{
		int k = n % 10;
		if (k == 4 || k == 7)
			count += 1;
		n /= 10;
	}
	if (count == 4 || count == 7 || count == 47 || count == 74)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}