#include<iostream>
using namespace std;
int main()
{
	int y, k, n;
	cin >> y >> k >> n;
	int count = 0;
	int i = k - (y % k);
	while (i + y <= n)
	{
		cout << i << " ";
		count++;
		i += k;
	}
	if (!count)
	{
		cout << -1 << endl;
	}
}