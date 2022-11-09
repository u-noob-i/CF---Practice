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
    map<int, int> A;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto itr = A.find(x);
        if (itr == A.end())
        {
            A.insert(pair<int, int>(x, 1));
        }
        else
        {
            itr->second++;
        }
    }
    priority_queue<int> arr;
    for (auto itr = A.begin(); itr != A.end(); ++itr)
    {
        arr.push(itr->second);
    }

    while (arr.size() > 1)
    {
        int x = arr.top();
        arr.pop();
        x--;
        int y = arr.top();
        arr.pop();
        y--;
        if (x)
        {
            arr.push(x);
        }
        if (y)
        {
            arr.push(y);
        }
    }
    if (arr.size())
    {
        cout << arr.top();
    }
    else
    {
        cout << 0;
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