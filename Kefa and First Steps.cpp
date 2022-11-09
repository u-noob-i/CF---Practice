#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int max = 0;
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] >= arr[i - 1])
		{
			count += 1;
			if (count > max)
				max = count;
		}
		else
		{
			count = 0;
		}
    }
	cout << max + 1;
}