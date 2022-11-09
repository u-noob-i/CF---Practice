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
#include <stack>

using namespace std;

string simplify(string str)
{
    int len = str.length();

    string res = str;
    int i = 0;

    stack<int> s;
    s.push(0);

    while (i < len)
    {
        if (str[i] == '(' && i == 0)
        {
            i++;
            continue;
        }

        if (str[i] == '+')
        {

            if (s.top() == 1)
                res[i] = '-';

            if (s.top() == 0)
                res[i] = '+';
        }
        else if (str[i] == '-')
        {
            if (s.top() == 1)
                res[i] = '+';
            else if (s.top() == 0)
                res[i] = '-';
        }
        else if (str[i] == '(' && i > 0)
        {
            if (str[i - 1] == '-')
            {
                int x = (s.top() == 1) ? 0 : 1;
                s.push(x);
            }

            else
                s.push(s.top());
        }

        else if (str[i] == ')')
            s.pop();

        else
            res[i] = str[i];
        i++;
    }
    return res;
}

void solve(int T)
{
    string s;
    int q, n;
    cin >> s >> q;

    n = s.length();
    s = simplify(s);
    vector<int> wild(n), sum(n);

    bool last = 1;
    wild[0] = 0;
    if (s[0] == '?')
    {
        wild[0]++;
    }
    sum[0] = wild[0];
    for (int i = 1; i < n; i++)
    {
        wild[i] = wild[i - 1];
        sum[i] = sum[i - 1];

        if (s[i] == '?')
        {
            wild[i]++;

            if (last)
            {
                sum[i]++;
            }
        }
        else if (s[i] == '+')
        {
            last = 1;
        }
        else if (s[i] == '-')
        {
            last = 0;
        }
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == r)
        {
            cout << 1 << " ";
            continue;
        }
        int x = sum[r] - sum[l];
        int y = wild[r] - wild[l];
        bool sign = 1;
        for (int i = l - 1; i >= 0; i--)
        {
            if (s[i] == '+')
            {
                break;
            }
            else if (s[i] == '-')
            {
                sign = 0;
                break;
            }
        }
        int ans = x;
        if (sign == 0)
        {
            ans = y - x;
        }
        cout << ans << " ";
    }
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