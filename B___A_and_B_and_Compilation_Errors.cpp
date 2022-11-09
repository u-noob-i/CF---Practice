#include<algorithm>
#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    int* b=new int[n-1];
    int* c=new int[n-2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n-1);
    for(int i=0;i<n-2;i++)
    {
        cin>>c[i];
    }
    sort(c,c+n-2);
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
        {
            if(arr[i]!=b[i] && !x)
            {
                x=arr[i];
            }
        }
        if(i<n-2)
        {
            if(b[i]!=c[i] && !y)
            {
                y=b[i];
            }
        }
        if(x&&y)
        {
            break;
        }
    }
    if(!x)
    {
        x=arr[n-1];
    }
    if(!y)
    {
        y=b[n-2];
    }
    cout<<x<<endl<<y<<endl;
}