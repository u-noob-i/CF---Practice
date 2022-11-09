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
    long long x, y, s, sum = 0, temp, ans = 0;
    cin >> x >> s;
    temp = x;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    y = 1;
    temp = x;
    while (sum > s)
    {
        if ((temp % 10) == 0)
        {
            temp /= 10;
            y *= 10;
            continue;
        }
        sum -= temp % 10;
        ans += (10 - (temp % 10)) * y;
        temp += (10 - (temp % 10));
        y *= 10;
        temp /= 10;
        long long d = temp;
        sum = 0;
        while (d)
        {
            sum += d % 10;
            d /= 10;
        }
    }
    cout << ans;
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