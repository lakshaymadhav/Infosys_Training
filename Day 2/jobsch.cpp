#include<bits/stdc++.h>
using namespace std;

bool comparison(const pair<char, pair<int, int> > &a,const pair<char, pair<int, int> > &b)
{
	return (a.second.second > b.second.second);
}

int main()
{
	vector< pair<char,pair <int, int> >> vect;
    int n;
    cout<<"enter the number of Jobs: ";
    cin>>n;
    for(int i =0;i<n;i++){
        int d,p;
        char id;
        cin>>id>>d>>p;
        vect.push_back(make_pair(id,make_pair(d,p)));
    }
	cout << "Following is maximum profit sequence of jobs \n";
        sort(vect.begin(), vect.end(), comparison);
	
    int result[n]; 
	bool slot[n]; 

	for (int i=0; i<n; i++)
		slot[i] = false;

	
	for (int i=0; i<n; i++)
	{
	
	for (int j=min(n, vect[i].second.first)-1; j>=0; j--)
	{
		
		if (slot[j]==false)
		{
			result[j] = i; 
			slot[j] = true;
			break;
		}
	}
	}

	
	for (int i=0; i<n; i++)
	if (slot[i])
		cout << vect[result[i]].first << " ";
	return 0;
}
