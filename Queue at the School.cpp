#include<iostream>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	char* s = new char[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	while (t--)
	{
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				char c = s[i];
				s[i] = s[i + 1];
				s[i + 1] = c;
				i += 1;
			}
        }
	}
	for (int i = 0; i < n; i++)
	{
		cout << s[i];
	}
}