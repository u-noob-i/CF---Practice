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
#include <stack>

using namespace std;

void solve(int T)
{
    int n, k;
    cin >> n >> k;
    int count = n / ((2 * k) + 1);
    int y = n - (count * ((2 * k) + 1));
    int diff = 0;
    if (y > 0 && y < k + 1)
    {
        diff = k + 1 - y;
    }
    if (y == 0)
    {
        cout << count << "\n";
    }
    else
    {
        cout << count + 1 << "\n";
    }
    int ind = k + 1 - diff;
    for (int i = 0; i < count; i++)
    {
        cout << ind << " ";
        ind += (2 * k) + 1;
    }
    if (y)
    {
        cout << ind;
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