#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.size();
	int count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == s[i + 1])
		{
			count++;
			if (count == 6)
			{
				cout << "YES";
				exit(0);
			}
		}
		else
		{
			count = 0;
		}
	}
	cout << "NO";
}