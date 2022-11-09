#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[3];
        int sum=0;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+3);
        if(sum%9==0&&(sum/9<=arr[0]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }        
    }
}