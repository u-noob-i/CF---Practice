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
string s;

void solve(int T)
{
    cin >> n >> s;
    string a = "", b = "";
    int ca = 0, cb = 0, oc = 0, cur = 0, turn = 0;
    for (i = 0; i < n; i++)
        if (s[i] == '1')
            oc++;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (cur < oc / 2)
            {
                a += "(";
                b += "(";
                ca++;
                cb++;
            }
            else
            {
                a += ")";
                b += ")";
                ca--;
                cb--;
            }
            cur++;
        }
        else
        {
            if (turn % 2)
            {
                a += "(";
                b += ")";
                ca++;
                cb--;
            }
            else
            {
                a += ")";
                b += "(";
                ca--;
                cb++;
            }
            turn++;
        }
        if (ca < 0 || cb < 0)
        {
            ca = 1;
            break;
        }
    }
    if (ca == 0 && cb == 0)
    {
        cout << "YES\n";
        cout << a << "\n"
             << b;
    }
    else
    {
        cout << "NO";
    }
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