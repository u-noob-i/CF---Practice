#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    int dist = distance(arr, unique(arr, arr + 4 ));
    cout << 4 - dist << endl;
}