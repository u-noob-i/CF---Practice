#include<iostream>

using namespace std;

int main()
{
	int m, n, a = 0;
	cin >> m >> n;
	if (n % 2 == 1 && m % 2 == 1) {
		cout << ((n * m) -1)/2;
	}
	else {
		cout << (n * m)/2;
	}
}