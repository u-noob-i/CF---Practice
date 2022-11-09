#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        char c='f';
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                if(c=='f')
                {
                    c='s';
                }
                else
                {
                    c='f';
                }
            }
            else 
            {
                if(c=='f')
                {
                    cout<<"First"<<endl;
                }
                else
                {
                    cout<<"Second"<<endl;
                }
                c='a';
                break;
            }
        }
        if(c!='a')
        {
            if(n%2)
            {
                cout<<"First"<<endl;
            }
            else
            {
                cout<<"Second"<<endl;
            }
        }
    }
}