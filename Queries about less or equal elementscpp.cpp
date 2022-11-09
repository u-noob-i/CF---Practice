#include<iostream>
#include<algorithm>
using namespace std;

int binarysearch(int l, int r, int x, int a[])
{
	int ans = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] > x)
		{
			r = mid - 1;
		}
		else
		{
			ans = mid + 1;
			l = mid + 1;
		}
	}
	return ans;
}

int main()
{
	int n, m;
	cin >> n >> m;
	int* a = new int[n];
	int* b = new int[m];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a + n);
	for (int i = 0; i < m; i++)
	{
		cout << binarysearch(0, n - 1, b[i], a) << " ";
	}
}