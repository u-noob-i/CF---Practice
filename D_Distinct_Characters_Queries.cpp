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

using namespace std;

void solve(int T)
{
    string s;
    int q;
    cin >> s >> q;
    vector<set<int>> pos(26);
    for (int i = 0; i < s.length(); i++)
    {
        pos[s[i] - 'a'].insert(i);
    }
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int ind;
            char c;
            cin >> ind >> c;
            ind--;
            pos[s[ind] - 'a'].erase(ind);
            pos[c - 'a'].insert(ind);
            s[ind] = c;
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            int ans = 0;
            for (int i = 0; i < 26; i++)
            {
                auto itr = pos[i].lower_bound(l);
                if (itr != pos[i].end() && *itr <= r)
                {
                    ans++;
                }
            }
            cout << ans << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
    }
}