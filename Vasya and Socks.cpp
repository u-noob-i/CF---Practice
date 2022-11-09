#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int d = 0;
	while (n--)
	{
		d += 1;
		if (d % m == 0)
			n += 1;
	}
	cout << d << endl;
}