#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int *arr = new int[n];
		int odd = 0, even = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 != 0)
				odd += 1;
			else
				even += 1;
		}
		if (odd == 0)
			cout << "No" << endl;
		else if (even == 0 && x % 2 == 0)
			cout << "No" << endl;
		else if ((odd + even) == x && odd % 2 == 0)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
}