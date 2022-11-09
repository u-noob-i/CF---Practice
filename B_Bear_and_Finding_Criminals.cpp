#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = arr[a - 1];
    int i = a - 2;
    int j = a;
    while (i >= 0 && j <= n - 1)
    {
        if (arr[i] && arr[j])
        {
            count += 2;
        }
        i--;
        j++;
    }
    while (i >= 0)
    {
        if (arr[i])
        {
            count++;
        }
        i--;
    }
    while (j < n)
    {
        if (arr[j])
        {
            count++;
        }
        j++;
    }
    cout << count << endl;
}
