#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int a = distance(s.begin(), unique(s.begin(), s.end()));
	if (a % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
		cout << "IGNORE HIM!" << endl;
}