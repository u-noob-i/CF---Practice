#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	double x, y;
	cin >> n >> x >> y;
	double* arr = new double[n];
	for (int i = 0; i < n; i++)
	{
		vis[i] = false;
		double a, b;
		cin >> a >> b;
		if (a - x == 0)
			arr[i] = 99999999;
		else
			arr[i] = (b - y) / (a - x);
	}
	sort(arr, arr + n);
	int dist = distance(arr, unique(arr, arr + n));
	cout << dist << endl;
}