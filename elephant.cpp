#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	while (n)
	{
		if (n > 5)
		{
			n -= 5;
			count++;
		}
		else
		{
			count++;
			n = 0;
		}
	}
	cout << count << endl;
}