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
    string t;
    cin >> s >> t;
    n = s.length();
    m = t.length();
    if (n < m)
    {
        cout << "No";
        return;
    }
    i = n - 1;
    j = m - 1;
    while (i >= 0 || j >= 0)
    {
        if (j >= 0 && i < 0)
        {
            cout << "No";
            return;
        }
        else if (j < 0)
            break;
        if (s[i] == t[j])
        {
            if (i > 0 && j > 0 && s[i - 1] == t[j - 1])
            {
                i -= 2;
                j -= 2;
            }
            else
            {
                i--;
                j--;
            }
        }
        else
        {
            i -= 2;
        }
    }
    cout << "Yes";
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