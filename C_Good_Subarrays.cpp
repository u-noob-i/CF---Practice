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

int n, i;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n >> s;
    vector<long long> a(n);
    map<long long, long long> arr;
    arr[0] = 1;
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        a[i] = s[i] - '0';
        if (i)
            a[i] += a[i - 1];
    }
    for (i = 0; i < n; i++)
        ans += ++arr[a[i] - i - 1] - 1;
    cout << ans;
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