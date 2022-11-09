#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		arr[i] = k;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i - 1; j >=0; j--)
		{
			if (arr[j] > arr[i])
			{
				int k = arr[i];
				arr[i] += arr[j] - arr[i];
				arr[j] -= arr[i] - k;
			}
		}
    }
	for (int i = 0; i < n; i++)
		cout << arr[i] << " " ;
}