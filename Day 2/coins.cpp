#include<iostream>
using namespace std;
int main()
{
    int n;
    int total=0;
    int coins[]={1000,500,100,50,20,10,5,2,1};
    int noofcoins[9]={0};
    cout<<"Enter the amount:";
    cin>>n;
    for(int i=0;i<9;i++)
    {
        while(n>=coins[i])
        {
            n-=coins[i];
            noofcoins[i]++;
            total++;
        }
    }
    for(int i=0;i<9;i++)
    {
        if(noofcoins[i]!=0)
        {
            cout<<coins[i]<<":"<<noofcoins[i]<<"\n";
        }
        
    }
    cout<<"Total no of coins: "<<total<<"\n";
}