#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int lower = 0, upper = 0;
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (islower(s[i]))
			lower += 1;
		else
			upper += 1;
	}
	if (lower < upper)
	{
		for (int i = 0; i < n; i++)
		{
			if (islower(s[i]))
			{
				char c = toupper(s[i]);
				s[i] = c;
			}
		}
	}
	else 
	{
		for (int i = 0; i < n; i++)
		{
			if (isupper(s[i]))
			{
				char c = tolower(s[i]);
				s[i] = c;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << s[i];
	}
}