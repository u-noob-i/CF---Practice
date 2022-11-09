#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

int binarysearch(vector<int> arr, int l, int r, long long x)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
        }
        int z=0,c=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].second;
            if(arr[i].second)
            {
                c++;
            }
            else
            {
                z++;
            }
        }
        if(z&&c)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i].first>arr[i+1].first)
            {
                z=-1;
                break;
            }
        }
        if(z>-1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}