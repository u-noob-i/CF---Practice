#include<iostream>
using namespace std;
int countteams(int n, int m, int& t)
{
	if (n == 1 || m == 0)
		return 0;
	t += 1;
	n -= 2;
	m -= 1;
	if (n > m)
		countteams(n, m, t);
	else
		countteams(m, n, t);
	return 0;
}
int main()
{
	int n, m;
	int t = 0;
	cin >> n >> m;
	if (n > m)
	{
		countteams(n, m, t);
	}
	else
		countteams(m, n, t);
	cout << t << endl;
}