#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <functional>

using namespace std;

int n, m, i, j, k;
string s;

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<int> minans(n, -1), maxans(n, -1);
    set<int> arr, brr;
    for (i = 1; i <= n; i++)  
        arr.insert(i);
    for (i = n - 1; i >= 0; i--)
    {
        while (i - 1 >= 0 && a[i] == a[i - 1])
            i--;
        minans[i] = maxans[i] = a[i];
        arr.erase(a[i]);  
    }
    brr=arr;
    for (i = n - 1; i >= 0; i--)
    {
        if (minans[i] != -1)
            continue;
        minans[i] = *arr.rbegin();
        arr.erase(minans[i]);
    }
    m = maxans[0];
    for (i = 1; i < n; i++)
    {
        if (maxans[i] != -1)
        {
            m = maxans[i];
            continue;
        }
        auto itr = brr.lower_bound(m);
        if (itr != brr.begin())
            itr = prev(itr);
        maxans[i] = *itr;
        brr.erase(maxans[i]);
    }
    for (i = 0; i < n; i++)
        cout << minans[i] << " ";
    cout << "\n";
    for (i = 0; i < n; i++)
        cout << maxans[i] << " ";
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
    for (int p = 1; p <= t; p++)
    {
        solve(t);
        cout << "\n";
    }
}