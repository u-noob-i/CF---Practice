#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

int n, m, x, y, i, j;

void solve(int T)
{
    long long o = 0, e = 0;
    cin >> n;
    vector<long long> arr(n), diff(n + 1);
    diff[0] = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 2 == 0)
        {
            e += arr[i];
        }
        else
        {
            o += arr[i];
        }
        diff[i + 1] = o - e;
    }
    int me = 0, mo = 1;
    long long change = 0, temp;
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            change = max(change, diff[i + 1] - diff[mo]);
            if (me == -1 || diff[me] > diff[i])
            {
                me = i;
            }
        }
        else
        {
            change = max(change, diff[i + 1] - diff[me]);
            if (diff[mo] > diff[i])
            {
                mo = i;
            }
        }
    }
    cout << e + change;
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