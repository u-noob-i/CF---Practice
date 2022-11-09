#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int cost = 0;
	int prev = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] <= prev)
		{
			cost += prev + 1 - arr[i];
			arr[i] = prev + 1;
		}
		prev = arr[i];
	}
	cout << cost << endl;
}