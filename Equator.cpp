#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		sum += a;
		arr[i] = sum;
	}
	int x = 0;
	if (sum % 2 == 0)
		x = sum / 2;
	else
		x = (sum / 2) + 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= x)
		{
			cout << i + 1 << endl;
			exit(0);
		}
	}
}