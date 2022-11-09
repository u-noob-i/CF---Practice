#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int l = s1.length();
	for (int i = 0; i < l; i++)
	{
		char c = s1[i], d = s2[i];
		if (isupper(c))
			s1[i] = tolower(c);
		if (isupper(d))
			s2[i] = tolower(d);
	}
	for (int i = 0; i < l; i++)
	{
		if (s1[i] < s2[i])
		{
			cout << -1 << endl;
			break;
		}
		else if (s1[i] > s2[i])
		{
			cout << 1 << endl;
			break;
		}
		else if (i == l - 1)
				cout << 0 << endl;
	}
}