#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int time = 4 * 60 - k;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		time -= (5 * i);
		if (time < 0)
		{
			cout << i - 1 << endl; 
			exit(0);
		}
		else if (time == 0)
		{
			cout << i << endl; 
			exit(0);
		}
	}
	cout << i - 1 << endl;
}