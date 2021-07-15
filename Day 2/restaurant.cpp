#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<"Enter the profits\n";
	int arr[n],prof[n];
	for(int i=0;i<n;i++){
		arr[i]=i;
		cin>>prof[i];
	}


	for(int i=n-2;i>=0;i--)
		for(int j=0;j<=i;j++)
			if(prof[j]<prof[j+1]){
				int temp=prof[j];
				prof[j]=prof[j+1];
				prof[j+1]=temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	
	
	cout<<"Enter connection\n";
	int con[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>con[i][j];

	cout<<"\n\n";

	int cl[n],num=0;
	cl[0]=arr[0];
	for(int i=1;i<n;i++)cl[i]=-1;

	cout<<"\n";

	for(int i=1;i<n;i++){
		int flag=0;
		for(int j=0;j<n;j++){
			if(cl[j]==-1)
				break;
			if(con[arr[i]][cl[j]]==0)
				flag=1;
			else
				flag=0;
		}
		if(flag)
			cl[++num]=arr[i];
	}

	
	cout<<"The vertices that are suitable for placing restaurents are:"<<"\n";
	for(int i=0;i<=num;i++)
		cout<<cl[i]+1<<"\t";

	return 0;
}