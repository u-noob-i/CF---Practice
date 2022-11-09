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

int arr[300][300];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        bool ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0&&j==0)||(i==0&&j==m-1)||(i==n-1&&j==0)||(i==n-1&&j==m-1)){
                    if(arr[i][j]>2){
                        ans=0;
                        break;
                    }
                    arr[i][j]=2;
                }
                else if(i==0||i==n-1||j==0||j==m-1){
                    if(arr[i][j]>3){
                        ans=0;
                        break;
                    }
                    arr[i][j]=3;
                }
                else{
                    if(arr[i][j]>4){
                        ans=0;
                        break;
                    }
                    arr[i][j]=4;
                }
            }
            if(!ans){
                break;
            }
        }
        if(!ans){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}