#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		arr.push_back(make_pair(a, b));;
	}
	sort(arr.begin(), arr.end());
	int date = arr[0].second;
	for (int i = 1; i < n; i++)
	{
		if (arr[i].second >= date)
			date = arr[i].second;
		else
			date = arr[i].first;
    }
	cout << date << endl;
}
