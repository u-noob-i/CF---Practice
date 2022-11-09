#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		if (n == 1)
		{
			cout << "YES" << endl;
	    }
		for (int i = 1; i < n; i++)
		{
		    if ((arr[i] - arr[i - 1]) > 1)
			{
				cout << "NO" << endl; 
				break;
			}
			if (i == n - 1)
				cout << "YES" << endl;
		}
	}
}