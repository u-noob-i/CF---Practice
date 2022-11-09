#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	char** arr = new char*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new char[m];
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		char c;
		if ((i + 1) % 2 == 0)
			c = 'W';
		else
			c = 'B';
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == '.')
				cout << c;
			else
				cout << "-";
			if (c == 'W')
					c = 'B';
			else
					c = 'W';
		}
		cout << endl;
	}
}