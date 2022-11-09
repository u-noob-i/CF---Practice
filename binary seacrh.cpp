#include<iostream>
using namespace std;
int binarysearch(int arr[], int l, int r, int x)
{
	if (l > r)
		return -1;
	int mid = (l + r) / 2;
	cout << l << " " << r <<" "<<mid<< endl;
	if (arr[mid] == x)
		return mid;
	if (arr[mid] < x)
	{
		return binarysearch(arr, mid + 1, r, x);
	}
	if (arr[mid] > x)
	{
		return binarysearch(arr, l, mid - 1, x);
	}
	return -1;
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	cout << binarysearch(arr, 0, 9, 10);
}