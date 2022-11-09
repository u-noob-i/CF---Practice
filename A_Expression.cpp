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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a + b + c;
    ans = max((a + b) * c, ans);
    ans = max(a * (b + c), ans);
    ans = max((a * b) + c, ans);
    ans = max(a + (b * c), ans);
    ans = max(a * b * c, ans);
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