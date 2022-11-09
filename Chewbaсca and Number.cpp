#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long long s;
	cin >> s;
	long long n = s;
	vector<pair<int, int>> arr;
	int count = 0;
	while (n != 0)
	{
		int a = n % 10;
		n /= 10;
		arr.push_back(make_pair(a, 9 - a));
		count += 1;
	}
	for (int i = arr.size() - 1; i >= 0; i--)
	{
		if (i == arr.size() - 1)
		{
			int a = min(arr[i].first, arr[i].second);
			if (a == 0)
			{
				cout << max(arr[i].first, arr[i].second);
			}
			else
				cout << a;
		}
		else
			cout << min(arr[i].first, arr[i].second);
	}
}