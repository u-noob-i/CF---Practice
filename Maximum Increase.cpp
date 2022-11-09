#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int mxl = 1;
	int l = 1;
	for (int i = 0; i < n - 1; i++)
	{
		while ((i < n - 1) && (arr[i] < arr[i + 1]))
		{
			i++;
			l++;
		}
		mxl = max(mxl, l);
		l = 1;
	}
	cout << mxl << endl;
	return 0;
}