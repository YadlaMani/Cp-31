#include<bits/stdc++.h>
#include<iostream>
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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        int k=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                k++;
ans=max(ans,k);
            }
            else{
                
                k=0;
            }
        }
        cout<<ans<<endl;
    }
}