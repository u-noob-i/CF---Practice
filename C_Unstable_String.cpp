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

int n, m, x, y, i, j;

void solve(int T)
{
    string s;
    cin >> s;
    n = s.length();
    long long ans = 0, len = 0;
    for (i = 0; i < n; i++)
    {
        len = 1;
        if (s[i] == '?')
        {
            while (i < n - 1 && s[i + 1] == '?')
            {
                i++;
                len++;
            }
            if (i == n - 1)
            {
                ans += (len * (len + 1)) / 2;
                break;
            }
        }
        else
        {
            j = i - 1;
            long long temp = 0;
            while (j >= 0 && s[j] == '?')
            {
                j--;
                temp++;
            }
            len += temp;
            ans -= (temp * (temp + 1) / 2);
        }
        char c;
        if (s[i] == '0')
        {
            c = '1';
        }
        else
        {
            c = '0';
        }
        while (i < n - 1 && (s[i + 1] == c || s[i + 1] == '?'))
        {
            i++;
            len++;
            if (c == '0')
            {
                c = '1';
            }
            else
            {
                c = '0';
            }
        }
        ans += ((len + 1) * len) / 2;
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
        cout << "\n";
    }
}