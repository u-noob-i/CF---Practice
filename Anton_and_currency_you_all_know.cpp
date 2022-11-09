#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int ind = s.length() - 1;
	int n = ind;
	for (int i = 0; i < n; i++)
	{
		if ((s[i] - '0') % 2 == 0)
		{
			ind = i;
			if (s[n] > s[i])
				break;
		}
	}
	if (ind == n)
		cout << -1 << endl;
	else
	{
		swap(s[ind], s[n]);
		cout << s << endl;
	}
}