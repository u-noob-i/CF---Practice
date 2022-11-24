#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <queue>
#include <climits>

using namespace std;

int n, m, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    double a, b, c;
    cin >> a >> b >> c;
    double x = (a + b) / 2, z = a;
    long long l = 1, r = 1000000, mid, y = 1, last;
    while (l <= r)
    {
        mid = (l + r) / 2;
        z = (mid * a) + ((mid - 1) * b);
        z /= (double)(mid + mid - 1);
        if (z <= c)
        {
            last = r;
            r = mid - 1;
        }
        else
        {
            last = l;
            l = mid + 1;
        }
    }
    y = last;
    if (z < c && y > 1)
    {
        double temp = ((y - 1) * a) + ((y - 2) * b);
        temp /= (double)(y - 1 + y - 2);
        if (abs(temp - c) < abs(z - c))
        {
            z = temp;
            y--;
        }
    }
    else if (z > c)
    {
        double temp = ((y + 1) * a) + (y * b);
        temp /= (double)(y + 1 + y);
        if (abs(temp - c) < abs(z - c))
        {
            z = temp;
            y++;
        }
    }
    cout << last << " " << z << "\n";
    if (abs(x - c) <= abs(z - c))
        cout << 2;
    else
        cout << y + y - 1;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}