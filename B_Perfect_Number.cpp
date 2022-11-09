#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int> arr(k);
    int prev=19;
    for(int i=0;i<k;i++)
    {
        while(1)
        {
            int temp=prev,sum=0;
            while(temp)
            {
                sum+=(temp%10);
                temp/=10;
            }
            if(sum==10)
            {
                arr[i]=prev;
                prev++;
                break;
            }
            else
            {
                prev++;
            }            
        }
    }
    cout<<arr[k-1]<<endl;
}