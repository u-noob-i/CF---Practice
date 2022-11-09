#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int sum_my = 0, sum_his = 0;
	for (int k = 0; k < n-1; k++)
	{
		sum_his += arr[k];
	}
	sum_my += arr[n - 1];
	if (sum_my > sum_his)
	{
		cout << 1<< endl;
		exit(0);
	}
	for (int i = n - 2; i >= 0; i--)
	{
		sum_his -= arr[i];
		sum_my += arr[i];
		if (sum_my > sum_his)
		{
			cout << (n - i) << endl;
			exit(0);
		}
	}
}