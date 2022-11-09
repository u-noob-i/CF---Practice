#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i == 4 || i == 7 || i == 47 || i == 74 || i == 444 || i == 447 || i == 477 || i == 777 || i == 747 || i == 774)
		{
			if (n % i == 0)
			{
				cout << "YES" << endl;
				exit(0);
			}
			else
				continue;
		}
	}
	cout << "NO" << endl;
}