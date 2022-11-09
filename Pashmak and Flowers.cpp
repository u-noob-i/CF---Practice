#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cout << arr[n - 1] - arr[0] << " ";
	long long j = arr[0];
	long long k = arr[n - 1];
	long long jcount = 0, kcount = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == j)
			jcount += 1;
		else 
			break;
	}
	for (int i = n-1; i >= 0; i--)
	{
		if (arr[i] == k)
			kcount += 1;
		else
			break;
	}
	if (arr[0] == arr[n - 1])
		cout << n * (n - 1) / 2 << endl;
	else
        cout << jcount*kcount << endl;
}