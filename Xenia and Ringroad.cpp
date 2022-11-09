#include<iostream>
using namespace std;
int main()
{
	long long n, m;
	cin >> n >> m;
	long long pos = 1;
	long long t = 0;
	while (m--)
	{
		long long a;
		cin >> a;
		if (a > pos)
		{
			t += a - pos;
			pos = a;
		}
		else if (pos > a)
		{
			t += a + n - pos;
			pos = a;
		}
	}
	cout << t << endl;
}
