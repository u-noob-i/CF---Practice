#include<iostream>
#include<utility>
using namespace std;
int main()
{
	int n;
	cin >> n;
	pair<int, int> *arr = new pair<int, int>;
	int upsum = 0, downsum = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		upsum += a;
		downsum += b;
		arr[i] = make_pair(a, b);
	}
	int ans = -1;
	if (upsum % 2 == 0 && downsum % 2 == 0)
	{
		cout << 0 << endl;
		exit(0);
	}
	else if ((upsum % 2 != 0 && downsum % 2 == 0) || (upsum % 2 == 0 && downsum % 2 != 0))
	{
		cout << -1 << endl;
		exit(0);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if ((arr[i].first % 2 != 0 && arr[i].second % 2 == 0) || (arr[i].first % 2 == 0 && arr[i].second % 2 != 0))
			{
				cout << 1 << endl;
				exit(0);
			}
		}
	}
	cout << -1 << endl;
	return 0;
}