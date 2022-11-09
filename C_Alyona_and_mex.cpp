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
    int n, m, len = INT_MAX, x, y;
    cin >> n >> m;
    while (m--)
    {
        cin >> x >> y;
        len = min(len, y - x + 1);
    }
    m = 0;
    cout << len << "\n";
    while (n--)
    {
        cout << m << " ";
        m++;
        m %= len;
    }
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