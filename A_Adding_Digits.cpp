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

int n, m, i, j, k;
string s;

void solve(int T)
{
    int a, b;
    cin >> a >> b >> n;
    bool f = 0;
    for (i = 0; i < 10; i++)
    {
        if (((a * 10) + i) % b == 0)
        {
            a = (a * 10) + i;
            f = 1;
            break;
        }
    }
    if (!f)
        cout << -1;
    else
    {
        cout << a;
        for (i = 0; i < n - 1; i++)
            cout << 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}