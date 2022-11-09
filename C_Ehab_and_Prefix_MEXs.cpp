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
    cin >> n;
    vector<int> a(n), ans(n);
    set<int> se;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(i);
    }
    se.insert(n);
    if (a[0] == 0)
    {
        ans[0] = 1;
        se.erase(1);
    }
    else
    {
        ans[0] = 0;
        se.erase(0);
    }
    int last = 1;
    for (i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            continue;
        else
        {
            while (last <= i)
            {
                last++;
            }
        }
    }
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