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

int n, m, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n >> m;
    vector<int> a(n, 0);
    for (i = 0; i < m; i++)
    {
        cin >> j;
        a[j - 1]++;
    }
    priority_queue<int> pqm;
    priority_queue<int, vector<int>, greater<int>> pql;
    for (i = 0; i < n; i++)
    {
        pqm.push(a[i]);
        pql.push(a[i]);
    }
    while (abs(pqm.top() - pql.top()) > 2)
    {
        int x = pqm.top(), y = pql.top();
        pqm.pop();
        pql.pop();
        pqm.push(x - 1);
        pql.push(y + 2);
    }
    cout << pqm.top();
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