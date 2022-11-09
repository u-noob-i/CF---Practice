#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int max, min;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	max = arr[0];
	min = arr[0];
	int maxi = 0, mini = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxi = i;
		}
		else if (arr[i] <= min)
		{
			min = arr[i];
			mini = i;
		}
	}
	if (mini < maxi)
	{
		cout << maxi + n - mini - 2 << endl;
	}
	else
	{
		cout << maxi + n - mini - 1 << endl;
	}
}