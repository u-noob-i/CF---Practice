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
    cin >> n >> s;
    vector<vector<int>> a(52, vector<int>());
    for (i = 0; i < n; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            a[s[i] - 'a'].push_back(i);
        else
            a[s[i] - 'A' + 26].push_back(i);
    int ot = INT_MAX;
    for (i = 0; i < n; i++)
    {
        int ml = 1;
        for (j = 0; j < 52; j++)
        {
            if (!a[j].size())
                continue;
            int l = 0, r = a[j].size() - 1, mid, ans = -1;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (a[j][mid] >= i)
                {
                    ans = a[j][mid];
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }
            if (ans == -1)
            {
                ml = INT_MAX;
                break;
            }
            ml = max(ml, ans - i + 1);
        }
        ot = min(ml, ot);
    }
    cout << ot;
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