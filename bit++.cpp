#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, x = 0;
	cin >> n;
	string y;
	for (int i = 0; i < n; i++)
	{
		cin >> y;
		if (y[1] == '+')
			x++;
		else
			x--;
		y = {};
	}
	cout << endl << x;
}