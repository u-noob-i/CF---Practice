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
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long cursum = 0, ans = 0;
    set<long long> f;
    f.insert(0);
    for (int i = 0; i < n; i++)
    {
        cursum += arr[i];
        if (f.find(cursum) != f.end())
        {
            f.clear();
            ans++;
            cursum = arr[i];
            f.insert(0);
        }
        f.insert(cursum);
    }
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
        solve(i);
        cout << "\n";
    }
}