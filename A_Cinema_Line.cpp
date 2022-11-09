#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long> arr(n);
    bool flag = true;
    int f[2]={0,0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(flag)
        {
            if(arr[i]==25)
            {
                f[0]++;
            }
            else if(arr[i]==50)
            {
                f[1]++;
                if(f[0])
                {
                    f[0]--;
                }
                else
                {
                    flag=false;
                }                
            }
            else 
            {
                if(f[1]>0)
                {
                    f[1]--;
                    f[0]--;
                }
                else 
                {
                    f[0]-=3;
                }
                if(f[1]<0||f[0]<0)
                {
                    flag=false;
                }
            }
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }    
}