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
    string ans = "";
    ans += s[0];
    vector<bool> visited(26, 0);
    visited[s[0] - 'a'] = 1;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < ans.length(); j++)
            if (ans[j] == s[i - 1])
                break;
        if ((j > 0 && ans[j - 1] == s[i]) || (j < ans.length() - 1 && ans[j + 1] == s[i]))
            continue;
        if (visited[s[i] - 'a'])
        {
            cout << "NO";
            return;
        }
        if (j > 0 && j < ans.length() - 1)
        {
            cout << "NO";
            return;
        }
        if (j == 0)
            ans = s[i] + ans;
        else
            ans = ans + s[i];
        visited[s[i] - 'a'] = 1;
    }
    for (i = 0; i < 26; i++)
        if (!visited[i])
            ans += (char)('a' + i);
    cout << "YES\n" << ans;
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