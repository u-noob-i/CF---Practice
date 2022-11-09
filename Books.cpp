#include<iostream>
#include<algorithm>
using namespace std;

int binarysearch(long long arr[], int l, int r, long long time, long long prev)
{
    int ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        long long val = arr[mid] - prev;
        if (val <= time)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int main()
{
	int n;
	long long t;
	cin >> n >> t;
	long long* arr = new long long[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        sum += a;
        arr[i] = sum;
    }
    int maxv = 0;
    for (int i = 0; i < n; i++)
    {
        long long k = 0;
        if (i == 0)
            k = 0;
        else
            k = arr[i - 1];
        int b = binarysearch(arr, i, n - 1, t, k) - i + 1;
        maxv = max(maxv, b);
    }
    cout << maxv << endl;
}