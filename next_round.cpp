#include<iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int count = 0;
	int* arr = new int[ n ];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int j = arr[k - 1];
	for (int p = 0; p < n; p++)
	{
		if (arr[p] >= j && arr[p] > 0)
			count++;
	}
	cout << endl << count;
	delete[] arr;
}