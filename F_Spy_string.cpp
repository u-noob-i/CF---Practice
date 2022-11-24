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
    cin >> n >> m;
    vector<string> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    string temp = a[0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < 26; j++)
        {
            char c = temp[i];
            temp[i] = 'a' + j;
            bool flag = 1;
            for (k = 1; k < n; k++)
            {
                int dif = 0;
                for (int p = 0; p < m; p++)
                {
                    if (a[k][p] != temp[p])
                        dif++;
                    if (dif > 1)
                    {
                        flag = 0;
                        break;
                    }
                }
                if (!flag)
                    break;
            }
            if (flag)
            {
                cout << temp;
                return;
            }
            temp[i] = c;
        }
    }
    cout << -1;
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