#include<iostream>
#include<cmath>
#include<math.h>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long x=sqrt(n);
    vector<long long> arr;
    for(int i=1;i<=x;i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                arr.push_back(i);
            }
            else
            {
                arr.push_back(i);
                arr.push_back(n/i);
            }
            
        }
    }
    if(arr.size()<k)
    {
        cout<<-1<<endl;
    }    
    else
    {
        sort(arr.begin(),arr.end());
        cout<<arr[k-1]<<endl;
    }
    
}