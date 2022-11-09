#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
    int p;
    cin>>p;
    while(p--)
    {
        int a;
        cin>>a;
        arr[a-1]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        arr[a-1]++;
    }
    sort(arr,arr+n);
    if(!arr[0])
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    else
    {
        cout<<"I become the guy."<<endl;
    }
    
}