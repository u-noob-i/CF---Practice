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
		int a;
		cin >> a;
		while (a % 2 == 0)
		{
			a /= 2;
		}
		while (a % 3 == 0)
		{
			a /= 3;
		}
		arr[i] = a;
	}
	int dist = distance(arr, unique(arr, arr + n));
	if (dist == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}