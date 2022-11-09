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

set<int> primes;

void SieveOfEratosthenes()
{
    bool prime[1000001];
    for (int i = 2; i <= 1000000; i++)
    {
        prime[i] = true;
    }

    for (int p = 2; p * p <= 1000000; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 1000000; i += p)
                prime[i] = false;
        }
    }
    for (int i = 2; i <= 1000000; i++)
    {
        if (prime[i] == true)
        {
            primes.insert(i);
        }
    }
}
void solve(int T)
{
    int n, e;
    cin >> n >> e;
    vector<int> arr(n), ans(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (ans[i] != -1 || i - e < 0)
        {
            break;
        }
        ans[i] = 0;
        int oc = 0, pc = 0, lp = -1;
        if (arr[i] == 1)
        {
            oc++;
        }
        else if (primes.find(arr[i]) != primes.end())
        {
            pc++;
            lp = i;
        }
        for (int j = i - e; j >= 0; j -= e)
        {
            if (arr[j] == 1)
            {
                oc++;
                if (pc > 0)
                {
                    int y = lp - j;
                    y /= e;
                    y--;
                    ans[j] = max(0, oc - y);
                }
                else
                {
                    ans[j] = 0;
                }
            }
            else if (primes.find(arr[j]) != primes.end())
            {
                pc++;
                if (pc == 1)
                {
                    ans[j] = oc;
                }
                else if (pc > 0)
                {
                    pc = 1;
                    int y = lp - j;
                    y /= e;
                    oc = max(0, y - 1);
                    ans[j] = oc;
                }
                lp = j;
            }
            else
            {
                oc = pc = 0;
                ans[j] = 0;
            }
        }
    }

    long long x = 0;
    for (int i = 0; i < n; i++)
    {
        ans[i] = max(ans[i], 0);
        x += ans[i];
    }
    cout << x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    SieveOfEratosthenes();

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}