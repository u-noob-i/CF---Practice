#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n, m;
	cin >> n >> m;
	long long count = 0;
	if(m<=n)
	{
		cout<<n-m<<endl;
		exit(0);
	}
	int c=0;
	while(n!=m)
	{
		if(n<m)
		{
			c+=(m-n);
			break;
		}
		if(n%2==0)
		{
			n/=2;
		}
		else
		{
			n++;
		}
		c++;
	}
	cout<<c<<endl;
}
