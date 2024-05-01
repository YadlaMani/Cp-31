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
        string str;
        cin>>str;
        
        int n=str.size();
        long long ans=0,c=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                c++;
            }
            else if(c!=0){
                ans+=(c+1);
            }
        }
        cout<<ans<<endl;
    }
}