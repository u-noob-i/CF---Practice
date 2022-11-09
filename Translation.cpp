#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;
	int n = t.size();
	int k = n - 1;
	for (int i = 0; i < n / 2; i++)
	{
		char c = t[i];
		t[i] = t[k];
		t[k] = c;
		k -= 1;
	}
	if (s == t)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
}