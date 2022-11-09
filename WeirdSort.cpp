#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int* arr = new int[n];
		int* sorted = new int[n];
		bool* val = new bool[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sorted[i] = arr[i];
			val[i] = false;
		}
		sort(sorted, sorted + n);
		for (int i = 0; i < m; i++)
		{
			int a;
			cin >> a;
			val[a - 1] = true;
		}
		for (int i = 0; i < n; i++)
		{
			if (val[i] == false)
				continue;
			else
			{
				int j = i;
				while (val[j] && j < n)
				{
					j++;
				}
				sort(arr + i, arr + j + 1 );
				i = j - 1;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] != sorted[i])
			{
				cout << "NO" << endl;
				break;
			}
			else if (i == n - 1)
			{
				cout << "YES" << endl;
				break;
			}
		}
	}
}