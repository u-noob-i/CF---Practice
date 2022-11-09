#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int odd = 0, even = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			even += 1;
		else
			odd += 1;
		if (odd > 1 || even > 1)
			break;
	}
	if (odd > 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i] % 2 == 0)
			{
				cout << i + 1 << endl; 
				exit(0);
			}
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i] % 2 != 0)
			{
				cout << i + 1 << endl;
				exit(0);
			}
		}
	}
}