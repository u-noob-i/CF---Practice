#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

long long arr[100001];

long long binarysearch(int l, int r, long long x)
{
    long long ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
        {
            ans = m;
            break;
        }
        if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
            ans = m;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    arr[0] = 0;
    for (int i = 1; i < 100001; i++) {
        arr[i] = arr[i - 1] + i;
    }
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long x = binarysearch(1, 100000, k);
        int count = 0;
        for (long long i = 1; i <= n - x - 1; i++) {
            cout << "a";
            count++;
        }
        cout << "b";
        count++;
        for (long long i = 1; i <= (x * (x + 1) / 2) - k; i++) {
            cout << "a";
            count++;
        }
        cout << "b";
        count++;
        while (count < n) {
            cout << "a";
            count++;
        }
        cout << "\n";
    }
}