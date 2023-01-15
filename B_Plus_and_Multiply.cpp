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

int n, i, j, k;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long y, a, b;
    cin >> y >> a >> b;
    for (long long x = 1; x <= y; x *= a)
    {
        if ((y - x) % b == 0)
        {
            cout << "Yes";
            return;
        }
        if (a == 1)
            break;
    }
    cout << "No";
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