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

int n, m, k, i, j, x;

void solve(int T)
{
    cin >> n;
    if (n % 2 == 0)
        cout << "NO";
    else
    {
        cout << "YES\n";
        set<int> s;
        for (i = 1; i <= 2 * n; i++)
            s.insert(i);
        vector<int> arr(2 * n);
        for (i = 0; i < n; i++)
        {
            arr[i] = *s.begin();
            s.erase(s.begin());
            arr[i + n] = *s.begin();
            s.erase(s.begin());
            i++;
            if (i < n)
            {
                arr[i + n] = *s.begin();
                s.erase(s.begin());
                arr[i] = *s.begin();
                s.erase(s.begin());
            }
        }
        for (i = 0; i < 2 * n; i++)
            cout << arr[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}