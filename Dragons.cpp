#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	long long s;
	cin >> s >> n;
	pair<long long, long long> *arr = new pair<long long, long long>[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr + n);
	bool cond = true;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].first < s)
		{
			s += arr[i].second;
		}
		else
		{
			cond = false;
			break;
		}
	}
	if (cond)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}