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

int n, i, j, k;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n >> s;
    int ans = 1;
    vector<int> a(n);
    a[0] = 1;
    int e0 = 0, e1 = 0;
    map<int, set<int>> arr;
    if (s[0] == '0')
    {
        arr[0].insert(1);
        e0 = 1;
    }
    else
    {
        arr[1].insert(1);
        e1 = 1;
    }
    for (i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (arr[0].size())
            {
                k = *arr[0].begin();
                arr[0].erase(k);
                arr[1].insert(k);
                a[i] = k;
            }
            else
            {
                a[i] = ++ans;
                arr[1].insert(ans);
            }
        }
        else
        {
            if (arr[1].size())
            {
                k = *arr[1].begin();
                arr[1].erase(k);
                arr[0].insert(k);
                a[i] = k;
            }
            else
            {
                a[i] = ++ans;
                arr[0].insert(ans);
            }
        }
    }
    cout << ans << "\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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