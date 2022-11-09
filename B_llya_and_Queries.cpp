#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int m;
    cin>>m;
    vector<int> arr(n);
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            sum++;
        }
        arr[i]=sum;  
    }
    arr[n-1]=sum;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        if(l==1)
        {
            cout<<arr[r-2]<<endl;
        }
        else
        {
            cout<<arr[r-2]-arr[l-2]<<endl;
        }       
    }
}