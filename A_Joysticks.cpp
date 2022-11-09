#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int min=0;
    while(x&&y)
    {
        if(x<y)
        {
            y-=2;
            x++;;
        }
        else
        {
            y++;
            x-=2;
        }
        min++;    
        if(x<0||y<0)
        {
            min--;
            break;
        }
    }
    cout<<min<<endl;
}