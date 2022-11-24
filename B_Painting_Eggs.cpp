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
    cin >> n;
    vector<pair<int, int>> a(n);
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        a[i].second = i;
        sum += a[i].first;
    }
    j = -1;
    for (i = 0; i < n; i++)
    {
        if (abs(sum) <= 500)
        {
            break;
        }
        sum -= 1000;
    }
    if (abs(sum <= 500))
        j = i;
    if (j == -1)
        cout << -1;
    else
        for (i = 0; i < n; i++)
            if (i < j)
                cout << "G";
            else
                cout << "A";
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
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}