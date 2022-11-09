#include<iostream>

using namespace std;

int main()
{
	int n;
	int total = 0;
	int max = 0;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		total += b - a;
		if (total > max)
			max = total;
	}
	cout << max << endl;
}