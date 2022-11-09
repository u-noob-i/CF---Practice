#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	long long x;
	cin >> n >> x;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	long long time = 0;
	for (int i = 0; i < n; i++)
	{
		time += (x * arr[i]);
		if (x != 1)
			x -= 1;
	}
	cout << time << endl;
}