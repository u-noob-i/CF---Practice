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
    int n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<long long> krr;
    long long j = 1;
    while (j <= (long long)10000000000000000)
    {
        krr.push_back(j);
        j *= k;
    }
    vector<int> ind;
    for (int i = 0; i < n; i++)
    {
        for (int p = krr.size() - 1; p >= 0; p--)
        {
            if (arr[i] - krr[p] >= 0)
            {
                arr[i] -= krr[p];
                ind.push_back(p);
            }
            if (arr[i] == 0)
            {
                break;
            }
        }
        if (arr[i] > 0)
        {
            cout << "NO";
            return;
        }
    }
    if (ind.size() == 0)
    {
        cout << "YES";
        return;
    }
    sort(ind.begin(), ind.end());
    for (int i = 0; i < ind.size() - 1; i++)
    {
        if (ind[i] == ind[i + 1])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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