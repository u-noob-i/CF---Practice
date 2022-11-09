#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int* ar1 = new int[n];
		int* ar2 = new int[n];
		for (int i = 0; i < n; i++)
			cin >> ar1[i];
		for (int i = 0; i < n; i++)
			cin >> ar2[i];
		bool cond = true;
		for (int i = 0; i < n; i++)
		{
			if (ar1[i] + ar2[n - 1 - i] > x)
			{
				cond = false;
				break;
			}
			if (cond && i == n - 1)
				cout << "Yes" << endl;
		}
		if (!cond)
			cout << "No" << endl;
	}
}