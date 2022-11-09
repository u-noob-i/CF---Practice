#include<iostream>
#include<algorithm>
#include<set>
#include<cmath>
#include<math.h>
using namespace std;

void prime(int k, bool p[])
{
    for (int i = 0; i <= k; i++)
        p[i] = true;

    for (int j = 2; j <= k; j++)
    {
        if (p[j] == true)
        {
            for (int i = 2; j * i <= k; i++)
                p[i * j] = false;
        }
    }
}

int main()
{
	int n;
	cin >> n;
    bool* p = new bool[n + 2];
    prime(n + 2, p);
    if (n < 3)
    {
        cout << 1 << endl;
        while (n--)
        {
            cout << 1 << " ";
        }
    }
    else
    {
        cout << 2 << endl;
        for (int i = 2; i < n + 2; i++)
        {
            if (p[i])
                cout << 1 << " ";
            else
            {
                cout << 2 << " ";
            }
        }
    }
}