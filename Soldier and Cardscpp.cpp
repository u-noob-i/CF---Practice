#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k1;
	cin >> k1;
	vector<int> first;
	for (int i = 0; i < k1; i++)
	{
		int a;
		cin >> a;
		first.push_back(a);
	}
	int k2;
	cin >> k2;
	vector<int> second;
	for (int i = 0; i < k2; i++)
	{
		int a;
		cin >> a;
		second.push_back(a);
	}
	int round = 0;
	while (!first.empty() && !second.empty())
	{
		int a = first[0];
		int b = second[0];
		if (a > b)
		{
			second.erase(second.begin());
			first.erase(first.begin());
			first.push_back(b);
			first.push_back(a);
		}
		else
		{
			second.erase(second.begin());
			first.erase(first.begin());
			second.push_back(a);
			second.push_back(b);
		}
		round++;
		if (round >= 5000)
		{
			cout << -1 << endl;
			exit(0);
		}
	}
	if (first.empty())
		cout << round << " " << 2 << endl;
	else 
		cout << round << " " << 1 << endl;
	return 0;
}