#include<bits/stdc++.h>
using namespace std;
  

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
  
int main()
{
    vector< pair <int, int> > vect;
    int n;
    
    cout<<"Enter the number of elements: ";
    cin>>n;

    int a[n],b[n],act[n];
    
    cout<<"Enter the start array: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"Enter the finish array: "<<endl;
    for(int i=0;i<n;i++)
        cin>>b[i];
  
  
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(a[i],b[i]) );
    
    sort(vect.begin(), vect.end(), sortbysec);

    int i=0;
    cout << "Following activities are selected : "<<endl;
    cout<<i<<endl;
    for (int j = 0; j < n; j++)
    {
      if (vect[j].first >=vect[i].second)
      {
        cout<<j<<endl;
          i = j;
      }
    }
    
    return 0;
}