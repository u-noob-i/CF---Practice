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

int n, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long ans = 0;
    vector<long long> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    while (a[2] - a[0] > 1 && a[0] > 0)
    {
        ans++;
        a[2] -= 2;
        a[1]--;
        sort(a.begin(), a.end());
    }
    if (a[0] == 0)
    {
        while (a[1] >= 1 && a[2] > 1)
        {
            a[2] -= 2;
            a[1]--;
            ans++;
            sort(a.begin(), a.end());
        }
    }
    else
        ans += (a[0] + a[1] + a[2]) / 3;
    cout << ans;
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