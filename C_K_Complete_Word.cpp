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

int n, m, k, p, i, j;
string s;

void solve(int T)
{
    cin >> n >> k >> s;
    vector<vector<int>> arr(k, vector<int>(26));
    int ans = 0;
    for (i = 0; i < k; i++)
        for (j = 0; j < 26; j++)
            arr[i][j] = 0;
    for (i = 0; i < k / 2; i++)
    {
        m = 0;
        for (j = i; j < n; j += k)
        {
            arr[i][s[j] - 'a']++;
            arr[i][s[j - i + k - i - 1] - 'a']++;
            m += 2;
        }
        sort(arr[i].begin(), arr[i].end(), greater<int>());
        ans += m - arr[i][0];
    }
    if (k % 2)
    {
        i = k / 2;
        m = 0;
        for (j = i; j < n; j += k)
        {
            arr[i][s[j] - 'a']++;
            m++;
        }
        sort(arr[i].begin(), arr[i].end(), greater<int>());
        ans += m - arr[i][0];
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
        solve(p);
        cout << "\n";
    }
}