#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxi=0;
    int x[5]={1,2,3,4,5};
    int y[5]={6,7,8,9,10};
    for(int i=4;i>0;i--)
    {
        if(y[i]>max(x[i-1],y[i-1]) and y[i]>x[i])
        {
            maxi+=y[i];
            i--;
        }
        else
        {
            maxi+=x[i];
        }
    }
    maxi+=max(x[0],y[0]);
    cout<<maxi;
    return 0;
}