#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int n = str.size();
	char* c = new char[n / 3];
	int j = 0;
	for (int i = 1; i < n - 1;)
	{
		c[j] = str[i];
		i += 3;
		j += 1;
	}
	sort(c, c + n / 3);
	int dist = distance(c, unique(c, c + n / 3));
	cout << dist << endl;
}