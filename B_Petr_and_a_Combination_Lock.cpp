#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>
using namespace std;

int arr[15];
int n;

bool rec(int i,int x){
    if(i==n){
        if(abs(x)%360){
            return 0;
        }
        else{
            return 1;
        }
    }
    return rec(i+1,x+arr[i])||rec(i+1,x-arr[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(rec(0,0)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}