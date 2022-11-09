#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int* sorted = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sorted[i] = arr[i];
	}
	sort(sorted, sorted + n);
	bool cond = true;
	for (int i = 0; i < n; i++)
		{
			if (arr[i] != sorted[i])
			{
				cond = false;
				break;
			}
	}
	if (cond)
	{
		cout << 0 << endl;
	}
	else if (arr[0] >= arr[n - 1])
	{
		int i = 0;
		while (arr[i] <= arr[i + 1])
		{
			i++;
		}
		i++;
		int* a = new int[n];
		int ind = i;
		int k = 0;
    	for (int j = 0; j < n; j++)
		{
			if (i < n)
			{
				a[j] = arr[i];
				i++;
			}
			else
			{
				a[j] = arr[k];
				k++;
			}
		}
		cond = true;
		for (i = 0; i < n; i++)
		{
			if (sorted[i] != a[i])
			{
				cond = false;
				break;
			}
		}
		if (cond)
			cout << n - ind << endl;
		else 
			cout << -1 << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}