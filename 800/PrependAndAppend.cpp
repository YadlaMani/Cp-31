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
        string str;
        cin>>str;
        int ans=n;
        int l=0,r=n-1;
        while(l<r){
            if(str[l]!=str[r]){
                ans-=2;
                l++;
                r--;
               

            }
            else{
                break;
                
            }
        }
        cout<<ans<<endl;
    }

}