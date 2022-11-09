#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int d, sumtime;
	cin >> d >> sumtime;
	vector<pair<int, int>> arr;
	int minsum = 0, maxsum = 0;
	for (int i = 0; i < d; i++)
	{
		int mintime, maxtime;
		cin >> mintime >> maxtime;
		minsum += mintime;
		maxsum += maxtime;
		arr.push_back(make_pair(mintime, maxtime));
	}
	if (sumtime <= maxsum && sumtime >= minsum)
	{
		cout << "YES" << endl;
		if (sumtime == maxsum)
		{
			for (int i = 0; i < d; i++)
				cout << arr[i].second << " ";
		}
		else if (sumtime == minsum)
		{
			for (int i = 0; i < d; i++)
				cout << arr[i].first << " ";
		}
		else
		{
			int remtime = sumtime - minsum;
			for (int i = 0; i < d; i++)
			{
				int k = arr[i].second - arr[i].first;
				if (k == remtime)
				{
					arr[i].first += k;
					remtime = 0;
					break;
				}
				else if (k > remtime)
				{
					arr[i].first += remtime;
					remtime = 0;
					break;
				}
				else
				{
					arr[i].first += k;
					remtime -= k;
				}
			}
			for (int i = 0; i < d; i++)
				cout << arr[i].first << " ";
		}
	}
	else
		cout << "NO" << endl;
}