#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n;
    string s;
    cin >> s;
    n = s.length();
    long long m = 1000000007, ans = 1, cur = 0;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'm' || s[i] == 'w')
        {
            cout << 0;
            return;
        }
        if (s[i] == 'u' || s[i] == 'n')
        {
            cur = 1;
            while (i + 1 < n && s[i] == s[i + 1])
            {
                cur++;
                i++;
            }
            ans = (ans * cur) % m;
        }
        i++;
    }
    cout << ans;
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
        cout << "\n";
    }
}