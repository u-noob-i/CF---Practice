#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <functional>

using namespace std;

int n, m, i, j, k;
string s;

void solve(int T)
{
    cin >> n;
    vector<string> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    vector<vector<int>> count(26, vector<int>(n));
    for (i = 0; i < 26; i++)
    {
        for (j = 0; j < n; j++)
        {
            m = 0;
            for (k = 0; k < a[j].size(); k++)
                if (a[j][k] - 'a' == i)
                    m++;
            count[i][j] = m - a[j].size() + m;
        }
        sort(count[i].begin(), count[i].end(), greater<int>());
        // cout << i << "\n";
        // for (j = 0; j < n; j++)
        //     cout << count[i][j] << " ";
        // cout << "\n";
        int cur = 0;
        for (j = 0; j < n; j++)
        {
            cur += count[i][j];
            if (cur <= 0)
                break;
            ans = max(ans, j + 1);
        }
    }
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
        solve(t);
        printf("\n");
    }
}