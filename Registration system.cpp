#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string* s = new string[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	int dist = distance(s, unique(s, s + n));
	cout << dist;

}