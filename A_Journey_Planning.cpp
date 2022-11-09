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

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<long long, long long>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = arr[i].first;
        arr[i].first -= i;
    }
    sort(arr.begin(), arr.end());
    long long ans = 0;
    for (int i = 0; i < n;)
    {
        long long temp = 0;
        int j = i;
        while (j < n && arr[i].first == arr[j].first)
        {
            temp += arr[j++].second;
        }
        i = j;
        ans = max(ans, temp);
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
        solve(t);
        cout << "\n";
    }
}