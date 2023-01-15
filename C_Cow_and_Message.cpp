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

long long modu = 1000000007;

void solve(int T)
{
    cin >> s;
    n = s.length();
    long long a[26][26], count[26];
    for (i = 0; i < 26; i++)
        count[i] = 0;
    for (i = 0; i < 26; i++)
        for (j = 0; j < 26; j++)
            a[i][j] = 0;
    for (i = 0; i < n; i++)
    {
        k = s[i] - 'a';
        for (j = 0; j < 26; j++)
            a[j][k] += count[j];
        count[k]++;
    }
    long long ans = 0;
    for (i = 0; i < 26; i++)
        for (j = 0; j < 26; j++)
            ans = max(ans, a[i][j]);
    for (i = 0; i < 26; i++)
        ans = max(ans, count[i]);
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