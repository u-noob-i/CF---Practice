#include<iostream>
#include<algorithm>
#include<set>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int ec = 0, oc = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 0)
			ec++;
		else
			oc++;
	}
	if (ec == n || oc == n)
	{
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
	}
	else
	{
		sort(arr, arr + n);
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
	}
	
}