#include<iostream>
#include<algorithm>
using namespace std;
long long binarysearch(int l, int r, long long arr[], long long x, int last)
{
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (arr[last] - arr[mid - 1] == x)
			return x;
		else if (arr[last] - arr[mid - 1] > x)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	long long* arr = new long long[n];
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		long long a;
		cin >> a;
		sum += a;
		arr[i] = sum;
	}
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans = max(binarysearch(i + 1, n - 1, arr, arr[i], n - 1), ans);
	}
	cout << ans << endl;
}