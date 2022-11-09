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
    cin >> n >> k >> s;
    vector<int> count(26, 0);
    for (i = 0; i < n; i++)
        count[s[i] - 'a']++;
    int cp = 0, co = 0;
    for (i = 0; i < 26; i++)
    {
        cp += count[i] / 2;
        co += count[i] % 2;
    }
    int ans = (cp / k) * 2;
    cp %= k;
    cp *= 2;
    co += cp;
    if (co >= k)
        ans++;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}