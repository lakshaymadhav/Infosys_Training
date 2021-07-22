#include <bits/stdc++.h>
using namespace std;
int main() 
{
       int t,n,i,max,x;
       cin>>t;
       while(t--)
        {
             cin>>n;
             int arr[n];
             max=0;
            for(i=0;i<n;i++)
             {
                      cin>>arr[i];
             }
             int b[1001]={0};
             for(i=0;i<n;i++)
              {
                     b[arr[i]]++;
                     if(arr[i]==arr[i+1])
                              i++;
        }
        for(i=1;i<=1000;i++)
          {
                 if(b[i]>max)
                 {
                      max=b[i];
                      x=i;
                  }
        }
        cout<<x<<endl;
    }
	return 0;
}