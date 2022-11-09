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

void solve(int T)
{
    long long n;
    cin >> n;
    long long x = 1, cur = 1;
    while (cur < n)
    {
        x *= 3;
        cur += x;
    }
    while (x > 0)
    {
        if (cur - x >= n)
        {
            cur -= x;
        }
        x /= 3;
    }
    cout << cur;
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