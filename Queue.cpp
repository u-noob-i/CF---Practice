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
	int ans = 1;
	long long sum = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] >= sum)
		{
			ans++;
			sum += arr[i];
		}
	}
	cout << ans << endl;
}