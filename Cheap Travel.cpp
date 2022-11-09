#include<iostream>
using namespace std;
int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	if (a * m <= b)
		cout << a * n << endl;
	else
	{
		int cost = (n / m) * b;
		int ride = n % m;
		if (a * ride <= b)
			cout << cost + (a * ride) << endl;
		else
			cout << cost + b;
	}
}