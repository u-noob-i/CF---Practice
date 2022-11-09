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
vector<long long> ans(2000010);

void solve(int T)
{
    long long x, y, ret = 0;
    cin >> x >> y;
    while (x)
    {
        ret += ans[(x % 10) + y];
        ret %= modu;
        x /= 10;
    }

    cout << ret;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> a(10, 0);
    ans[0] = a[0] = 1;
    for (i = 1; i <= 200009; i++)
    {
        ans[i] = ans[i - 1];
        vector<long long> b(10, 0);
        for (j = 0; j < 10; j++)
        {
            if (j == 9 && a[j] > 0)
            {
                b[0] += a[j];
                b[0] %= modu;
                b[1] += a[j];
                b[1] %= modu;
                ans[i] += a[j];
                ans[i] %= modu;
            }
            else if (a[j] > 0)
            {
                b[j + 1] += a[j];
                b[j + 1] %= modu;
            }
        }
        a = b;
    }

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}