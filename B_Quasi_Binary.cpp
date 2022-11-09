#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans=0;
    vector<int> arr;
    while(n)
    {
        int x=0,t=n;
        int count=0;
        while(t)
        {
            if(t%10>0)
            {
                x+=pow(10,count);
            }
            count++;
            t/=10;
        }
        n-=x;
        arr.push_back(x);
        ans++;
    } 
    cout<<ans<<"\n";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}