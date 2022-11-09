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

int n, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long a, s;
    cin >> a >> s;
    vector<long long> arr, srr, brr;
    while (a)
    {
        arr.push_back(a % 10);
        a /= 10;
    }
    while (s)
    {
        srr.push_back(s % 10);
        s /= 10;
    }
    for (i = 0, j = 0; i < arr.size() &&
            j < srr.size(); i++, j++)
    {
        if (arr[i] <= srr[j])
        {
            brr.push_back(srr[j] - arr[i]);
        }
        else if (j >= srr.size() - 1)
        {
            cout << -1;
            return;
        }
        else
        {
            long long temp = srr[j] + (srr[++j] * 10);
            temp -= arr[i];
            if (temp > 9 || temp < 0)
            {
                cout << -1;
                return;
            }
            brr.push_back(temp);
        }
    }
    if (i != arr.size())
        cout << -1;
    else
    {
        while (j < srr.size())
            brr.push_back(srr[j++]);
        i = brr.size() - 1;
        while (i >= 0 && brr[i] == 0)
            i--;
        while (i >= 0)
            cout << brr[i--];
    }
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