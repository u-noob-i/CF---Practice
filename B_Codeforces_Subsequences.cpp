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
#include <stack>

using namespace std;

void solve(int T)
{
    long long k;
    int arr[10];
    cin >> k;
    long long cur = 1;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1;
    }
    int i = 0;
    while (cur < k)
    {
        cur /= arr[i % 10];
        arr[i % 10]++;
        cur *= arr[i % 10];
        i++;
    }
    for (i = 0; i < 10; i++)
    {
        while (arr[i]--)
        {
            if (i == 0 || i == 7)
            {
                cout << "c";
            }
            if (i == 1 || i == 5)
            {
                cout << "o";
            }
            if (i == 2)
            {
                cout << "d";
            }
            if (i == 3 || i == 8)
            {
                cout << "e";
            }
            if (i == 4)
            {
                cout << "f";
            }
            if (i == 6)
            {
                cout << "r";
            }
            if (i == 9)
            {
                cout << "s";
            }
        }
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