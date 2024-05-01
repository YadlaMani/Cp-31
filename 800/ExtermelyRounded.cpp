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
        string num=to_string(n);
        int len=num.length();
        int ans=0;
        for(int ch=1;ch<=9;ch++){
            int t=ch;
            for(int i=0;i<=len;i++){
                if(t <= n){
                    ans++;
                }
                t*=10;
            }
            
        }
        cout<<ans;
        cout<<endl;
    }

}