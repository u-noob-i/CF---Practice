#include<iostream>
using namespace std;
int binarysearch(int arr[], int l, int r, int x)
{
	if (l > r)
	{
		return 0;
	}
	int mid = (l + r) / 2;
	if ( x <= arr[mid] && x > arr[mid - 1])
	{
		return mid;
	}
	if (arr[mid] < x)
	{
		return binarysearch(arr, mid + 1, r, x);
	}
	if (arr[mid] > x)
	{
		return binarysearch(arr, l, mid - 1, x);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int worm = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr[i] += worm;
		worm = arr[i];
	}
	int m;
	cin >> m;
	while (m--)
	{
		int a;
		cin >> a;
		int p = 0;
		if (m == 0)
			cout << binarysearch(arr, 0, n - 1, a) + 1;
		else
			cout << binarysearch(arr, 0, n - 1, a) + 1 << endl;
	}
}