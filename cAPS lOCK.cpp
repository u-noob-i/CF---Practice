#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.size();
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isupper(s[i]))
			count += 1;
	}
	if (n == 1)
	{
		char c = s[0];
		if (islower(c))
			s[0] = toupper(c);
		else
			s[0] = tolower(c);
	}
	else if (count == n - 1 && islower(s[0]))
	{
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
			{
				char c = s[i];
				s[i] = toupper(c);
			}

			else {
				char c = s[i];
				s[i] = tolower(c);
			}
		}
	}
	else if (count == n)
	{
		for (int i = 0; i < n; i++)
		{
			char c = s[i];
			s[i] = tolower(c);

		}
	}
	cout << s << endl;
}