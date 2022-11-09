#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	int n, l;
	cin >> n >> l;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	double maxd = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if ((arr[i + 1] - arr[i]) > maxd)
			maxd = arr[i + 1] - arr[i];
	}
	maxd /= 2;
	double start = arr[0] - 0;
	double end = l - arr[n - 1];
	double maxa = max(maxd, start);
	maxa = max(maxa, end);
	cout << fixed << setprecision(10) << maxa << endl;
}