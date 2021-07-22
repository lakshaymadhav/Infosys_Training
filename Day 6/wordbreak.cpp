#include <bits/stdc++.h>
using namespace std;

int main(){
    string arr[] = {"this","th","is","Word"
                        ,"break","b","r","e","a","k"
                        ,"bre","brea","ak","problem"};

    string val="Wordbreakproblem";
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<val.length();i++){
        for(int j=0;j<n;j++){
            if(val.substr(i,arr[j].length())==arr[j]){
                cout<<val.substr(i,arr[j].length())<<" ";
                break;
            }
        }
    }
}
