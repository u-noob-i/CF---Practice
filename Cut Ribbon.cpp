#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int n;
	cin >> n >> a >> b >> c;
	int max = 0;
	for (int i = 0; i * a <= n; i++)
	{
		for (int j = 0; (i * a) + (j * b) <= n; j++)
		{
			if((n - (i * a) - (j * b)) % c ==0)
			{
				int k = (n - (i * a) - (j * b)) / c;
				if (max < i + j + k)
					 max = i + j + k;
			}
        }
	}
	cout << max << endl;
}