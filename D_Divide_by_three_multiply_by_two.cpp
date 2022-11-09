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

using namespace std;

bool sortbysec(const pair<int, long long> &a, const pair<int, long long> &b)
{
    return (a.second < b.second);
}

bool gret(const pair<int, long long> &a, const pair<int, long long> &b)
{
    return (a.first > b.first);
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<int, long long>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second;
        long long temp = arr[i].second;
        arr[i].first = 0;
        while (temp % 3 == 0)
        {
            temp /= 3;
            arr[i].first++;
        }
    }
    sort(arr.begin(), arr.end(), sortbysec);
    sort(arr.begin(), arr.end(), gret);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].second << " ";
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