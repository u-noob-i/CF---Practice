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
    long long l, r, x, y, z;
    cin >> l >> r >> x;
    z = l;
    while (z <= r)
    {
        y = x % z;
        if (r - l >= y && x / z)
        {
            cout << z << " " << r << " " << r - y;
            break;
        }
        else if (r - l >= z - y)
        {
            cout << z << " " << r - (z - y) << " " << r;
            break;
        }
        z++;
    }
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