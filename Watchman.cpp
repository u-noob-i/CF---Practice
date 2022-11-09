/*#include<iostream>
#include<algorithm>
#include<utility>
#include<map>
using namespace std;

int main()
{
	int n ,k;
	long long m;
	cin >> n >> m >> k;
	long long arr[n][k + 1];
	{
		for (int i = 0; i < n; i++)
		{
			long long sum = 0;
			for (int j = 0; j < k + 1; j++)
			{
				long long a;
				cin >> a;
				if (j == k)
				{
					arr[i][j] = a;
				}
				else
				{
					sum += a;
					arr[i][j] = sum;
				}
			}
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i][k] <= 10)
		{
			if (arr[i][k - 1] >= m)
				count++;
		}
	}
	cout << count << endl;
}*/

