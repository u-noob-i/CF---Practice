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

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<set<int>> arr(31);
    for (i = 0; i < n; i++)
        for (j = 0; j < 31; j++)
            if (((1 << j) & a[i]) != 0)
                arr[j].insert(i);
    vector<int> ans(n), visited(n, 0);
    for (i = 0, j = 30; j >= 0; j--)
    {
        if (arr[j].size() != 1)
            continue;
        ans[i++] = *arr[j].begin();
        visited[*arr[j].begin()] = 1;
        for (k = j - 1; k >= 0; k--)
            arr[k].erase(*arr[j].begin());
    }
    for (j = 0; j < n; j++)
        if (!visited[j])
            ans[i++] = j;
    for (i = 0; i < n; i++)
        cout << a[ans[i]] << " ";
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
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}