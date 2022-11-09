#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	long long count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < i + 1)
		{
			count += i + 1 - arr[i];
		}
		else if (arr[i] > i + 1)
		{
			count += arr[i] - i - 1;
		}
	}
	cout << count << endl;
}