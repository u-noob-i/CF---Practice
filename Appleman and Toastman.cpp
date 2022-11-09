#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long* arr = new long long[n];
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		arr[i] = sum;
	}
	long long score = arr[n - 1];
	long long prev = 0;
	for (int i = 1; i < n; i++)
	{
		score += arr[n - 1] - prev;
		prev = arr[i - 1];
	}
	cout << score << endl;
}