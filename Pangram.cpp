#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	int n;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		char c = s[i];
		if (isupper(c))
		{
			s[i] = tolower(c);
		}
	}
	sort(s.begin(), s.end());
	int dist = distance(s.begin(), unique(s.begin(), s.end()));
	if (dist == 26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}