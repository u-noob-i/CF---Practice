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
	for (int j = 0; j < n; j++)
	{
		if (arr[j] == sorted[j])
		{
			if (j == n - 1)
			{
				cout << "yes" << endl << 1 << " " << 1 << endl;
				exit(0);
			}
		}
		else 
			break;
	}
	for (int i = 0; i < n - 1; i++)
	{
		int first = i, last = i;
		for (int j = i; j < n - 1; j++)
		{
			if (arr[j] >= arr[j + 1])
				last++;
			else
				break;
		}
		int p = last;
		if(first != last)
		{
			for (int j = first; ; j++)
		    {
			int t = arr[j];
			arr[j] = arr[p];
			arr[p] = t;
			p--;
			if (p <= j)
				break;
		    }

		    int z = 0;
		    for (; z < n; z++)
		    {
			if (sorted[z] != arr[z])
			{
				z = 0;
				break;
			}
		    }
		    if (z == n)
		    {
			   cout << "yes" << endl << first + 1 << " " << last + 1 << endl;
			   exit(0);
		    }
			else
			{
				cout << "no" << endl;
				exit(0);
			}
		
		}
	}
	cout << "no" << endl;
}