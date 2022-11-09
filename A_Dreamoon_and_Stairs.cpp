#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a;
    for(int i=0;i<=n;i++)
    {
        if((n-(1*i))%2==0)
        {
            int j=(n-(1*i))/2;
            if((i+j)%m==0)
            {
                a.push_back(i+j);
            }
        }
    }
    sort(a.begin(),a.end());
    if(!a.size()){
        cout<<-1<<endl;
        exit(0);
    }
    cout<<a[0]<<endl;
}