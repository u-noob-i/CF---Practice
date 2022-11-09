#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long t = n;
	long long digits = 0;
	long long nd = 0;
	while (t)
	{
		t /= 10;
		nd += 1;
	}
	long long j = nd - 1;
	while (j != 0)
	{
		digits += ((9 * pow(10, j - 1)) * j);
		j --;
	}
	long long cur = pow(10, nd - 1);
	cur = n - cur + 1;
	digits += (nd * cur);
	cout << digits << endl;
}