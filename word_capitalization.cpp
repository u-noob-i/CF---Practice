#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	char c = s[0];
	if (islower(c))
		s[0] = toupper(c);
	cout << s << endl;
}