#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int block = 0;
	string* a= new string[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i - 1])
			block += 1;
	}
	cout << block << endl;
}