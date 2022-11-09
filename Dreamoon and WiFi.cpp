#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

double comb(int n, int r)
{
	double p = 1;
	double num = 1;
	double dem = 1;
	int a = n - r + 1;
	while (a <= n)
	{
		num *= a;
		a++;
	}
	while (r >= 1)
	{
		dem *= r;
		r--;
	}
	p = num / dem;
	return p;
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int pcounts1 = 0, pcounts2 = 0, mcounts1 = 0, mcounts2 = 0, qcount = 0;
	int n = s1.length();
	for (int i = 0; i < n; i++)
	{
		if (s1[i] == '+')
			pcounts1 += 1;
		if (s2[i] == '+')
			pcounts2 += 1;
		if (s1[i] == '-')
			mcounts1 += 1;
		if (s2[i] == '-')
			mcounts2 += 1;
		if (s2[i] == '?')
			qcount += 1;
	}

    if (pcounts1 < pcounts2 || mcounts1 < mcounts2)
	    cout << 0 << endl;
	else if (pcounts1 == pcounts2 && mcounts1 == mcounts2)
		cout << 1 << endl;
	else if (qcount == 0)
		cout << 0 << endl;
	else
	{
		double prob = 0;
		int difp = pcounts1 - pcounts2, difm = mcounts1 - mcounts2;
		if (difp + difm == qcount)
		{
			prob = comb(qcount, difp) / pow(2, qcount);
			cout << fixed << setprecision(11) << prob << endl;
		}
		else
			cout << 0 << endl;
	}
}