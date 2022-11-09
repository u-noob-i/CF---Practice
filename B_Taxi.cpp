#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[5]={0,0,0,0,0};
    for(int i=0;i<n;i++)
    {
       int a;
       cin>>a;
       arr[a]++;
    }
    int count=arr[4]+arr[3]+(arr[2]/2);
    arr[1]-=min(arr[1],arr[3]);
    arr[2]%=2;
    if(arr[2]>0)
    {
        arr[1]-=2;
        arr[2]=0;
        count++;
    }
    if(arr[1]>0)
    {
        count+=(arr[1]/4);
        if(arr[1]%4!=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}