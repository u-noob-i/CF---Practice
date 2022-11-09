#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int** arr=new int*[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=new int[m];
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int r=0,c=0;
        for(int i=0;i<n;i++)
        {
            int flag=1;
            for(int j=0;j<m;j++)
            {
                if(arr[i][j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            r++;
        }
        for(int i=0;i<m;i++)
        {
            int flag=1;
            for(int j=0;j<n;j++)
            {
                if(arr[j][i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                c++;
            }
        }
        int chance=min(c,r);
        if(chance%2==0)
        {
            cout<<"Vivek"<<endl;
        }
        else
        {
            cout<<"Ashish"<<endl;
        }
    }
}