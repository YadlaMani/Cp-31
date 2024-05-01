#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int checker=INT_MAX;
        int flag=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                
                flag=1;
                break;
                
            }
            else{
                checker=min(a[i]-a[i-1],checker);
            }
        }
        if(flag){
            cout<<0<<endl;
        }
        else{
            cout<<checker/2+1<<endl;
        }
    }
}