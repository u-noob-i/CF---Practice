#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    auto itr=unique(arr.begin(),arr.end());
    arr.resize(distance(arr.begin(),itr));
    if(arr.size()==1)
    {
        cout<<0<<"\n";
        return 0;
    }
    if(arr.size()==2)
    {
        if((arr[1]-arr[0])%2==0)
        {
            cout<<(arr[1]-arr[0])/2<<"\n";
        }
        else
        {
            cout<<arr[1]-arr[0]<<"\n";
        }
        return 0;
    }
    if(arr.size()==3&&arr[1]-arr[0]==arr[2]-arr[1])
    {
        cout<<arr[1]-arr[0]<<"\n";
        return 0;
    }
    cout<<-1<<"\n";
}