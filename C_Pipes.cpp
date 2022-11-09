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
    cin >> n;
    vector<string> a(2);
    cin >> a[0] >> a[1];
    for (i = 0, j = 0; i < n; i++)
    {
        if (a[j][i] >= '3' && a[j][i] <= '6' && a[(j + 1) % 2][i] >= '3' && a[(j + 1) % 2][i] <= '6')
            j = (j + 1) % 2;
        else if (a[j][i] == '1' || a[j][i] == '2')
            continue;
        else
        {
            cout << "No";
            return;
        }
    }
    if (j == 1)
        cout << "Yes";
    else
        cout << "No";
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