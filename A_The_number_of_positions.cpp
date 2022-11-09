#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>

using namespace std;

void solve(int T)
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    if (a == n - b)
    {
        ans = b;
    }
    if (a < n - b)
    {
        ans = b + 1;
    }
    if (a > n - b)
    {
        ans = n - a;
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