#include <bits/stdc++.h>
using namespace std;
int max(int i, int j) {
    return i > j ? i : j;
}
 
int findMaxProfit(int x[], int y[], int n)
{
    
    if (n < 0) {
        return 0;
    }
    
    int profit = 0;
    profit = max(profit, x[n] + findMaxProfit(x, y, n - 1));
    profit = max(profit, y[n] + findMaxProfit(x, y, n - 2));
 
   
    return profit;
}
 
int main()
{
    int l;
    cout<<"enter the days: ";
    cin>>l;
    int x[l], y[l];
    cout<<"enter the prices of X: "<<endl;
    for (int i = 0; i < l; i++)
    {
        cout<<"enter the price of day "<<i+1<<": ";
        cin>>x[i];
    }
    cout<<"enter the prices of Y: "<<endl;
    for (int i = 0; i < l; i++)
    {
        cout<<"enter the price of day "<<i+1<<": ";
        cin>>y[i];
    }
    
    int n = sizeof(x) / sizeof(x[0]);
 
    cout<<"The maximum profit earned is "<< findMaxProfit(x, y, n - 1);
 
    return 0;
}