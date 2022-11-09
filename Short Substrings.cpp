#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string b;
		cin >> b;
		cout << b[0] << b[1];
		for (int i = 3; i <= b.size();)
		{
			cout << b[i];
			i += 2;
		}
		cout << endl;
	}
}