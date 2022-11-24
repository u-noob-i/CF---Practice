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
    cin >> s;
    n = s.length();
    int ans = 0;
    vector<int> ot;
    for (i = 0; i < n; i++)
    {
        if (i < n - 4 && s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o'
                && s[i + 3] == 'n' && s[i + 4] == 'e')
        {
            ans++;
            ot.push_back(i + 3);
            s[i + 2] = 'x';
        }
        if (i < n - 2 && s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o')
        {
            ans++;
            ot.push_back(i + 2);
            s[i + 1] = 'x';
        }
        else if (i < n - 2 && s[i] == 'o' && s[i + 1] == 'n' && s[i + 2] == 'e')
        {
            ans++;
            ot.push_back(i + 2);
            s[i + 1] = 'x';
        }
    }
    cout << ans << "\n";w
    for (i = 0; i < ot.size(); i++)
        cout << ot[i] << " ";
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