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

void solve(int T)
{
    int n;
    cin >> n;
    vector<long long> arr(n), brr(n), crr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 2 == 0)
        {
            brr[i] = 1;
            crr[i] = arr[i];
        }
        else
        {
            crr[i] = 1;
            brr[i] = arr[i];
        }
    }
    long long B = 0, C = 0, S = 0;
    for (int i = 0; i < n; i++)
    {
        S += arr[i];
        B += abs(arr[i] - brr[i]);
        C += abs(crr[i] - arr[i]);
    }
    B *= 2;
    C *= 2;
    if (B <= S)
    {
        for (int i = 0; i < n; i++)
        {
            cout << brr[i] << " ";
        }
    }
    else if (C <= S)
    {
        for (int i = 0; i < n; i++)
        {
            cout << crr[i] << " ";
        }
    }
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