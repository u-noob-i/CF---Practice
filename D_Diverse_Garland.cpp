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

int n, m, p, i, j;

void solve(int T)
{
    string s;
    cin >> n >> s;
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        j = i;
        while (j < n - 1 && s[j] == s[j + 1])
        {
            j++;
        }
        i++;
        char c;
        if (j == n - 1)
            if (s[i] == 'R')
                c = 'G';
            else
                c = 'R';
        else if (s[i] == 'R' && s[j + 1] == 'G')
            c = 'B';
        else if (s[i] == 'R' && s[j + 1] == 'B')
            c = 'G';
        else if (s[i] == 'G' && s[j + 1] == 'R')
            c = 'B';
        else if (s[i] == 'G' && s[j + 1] == 'B')
            c = 'R';
        else if (s[i] == 'B' && s[j + 1] == 'R')
            c = 'G';
        else if (s[i] == 'B' && s[j + 1] == 'G')
            c = 'R';

        while (i <= j)
        {
            ans++;
            s[i] = c;
            i += 2;
        }
        i = j;
    }
    cout << ans << "\n"
         << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}