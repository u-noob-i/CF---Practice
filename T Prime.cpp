#include<iostream>
using namespace std;
int binarysearch(long long arr[], int l, int r, long long x)
{

    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == x)
        return mid;
    if (arr[mid] < x)
    {
        return binarysearch(arr, mid + 1, r, x);
    }
    if (arr[mid] > x)
    {
        return binarysearch(arr, l, mid - 1, x);
    }
    return -1;
}
int main()
{
    int k = 1000000;
    bool* prime = new bool[k + 1];
    for (int i = 0; i <= 1000000; i++)
        prime[i] = true;

    for (int p = 2; p <= k; p++)
    {
        if (prime[p] == true)
        {
            for (int i = 2; i * p <= k; i++)
                prime[i * p] = false;
        }
    }
    int index = 0;
    long long square[78498];
    for (int p = 2; p <= k; p++)
    {
        if (prime[p])
        {
            square[index] = (long long)p * (long long)p;
            index += 1;
        }
    }
    int t;
    cin >> t;
    long long* arr = new long long[t];
    {
        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
            int z = binarysearch(square, 0, 78497, arr[i]);
            if (z == -1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}