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
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    int dep = 0, par = 1;
    i = 1;
    while (i < n)
    {
        dep++;
        int np = 0;
        while (par)
        {
            if (i >= n)
                break;
            par--;
            for (j = i + 1; j < n; j++)
                if (a[j] < a[j - 1])
                    break;
            np += j - i;
            i = j;
        }
        par = np;
        if (i >= n)
            break;
    }
    cout << dep;
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