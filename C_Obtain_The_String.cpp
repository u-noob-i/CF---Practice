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

void solve(int T)
{
    string s, t;
    cin >> s >> t;
    vector<set<int>> arr(26);
    vector<int> a(26, 0), b(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a'].insert(i);
        a[s[i] - 'a']++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        b[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (b[i] && (!a[i]))
        {
            cout << -1;
            return;
        }
    }
    int last = -1, ans = 1;
    for (int i = 0; i < t.length(); i++)
    {
        auto itr = arr[t[i] - 'a'].lower_bound(last);
        if (itr == arr[t[i] - 'a'].end())
        {
            last = -1;
            ans++;
            i--;
        }
        else
        {
            last = (*itr) + 1;
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

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << '\n';
    }
}