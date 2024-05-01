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
        
        int ans=4;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]--;
            
        }
        for(int i=0;i<n;i++){
            set<int>s;
            s.insert(i);
            s.insert(a[i]);
            s.insert(a[a[i]]);
            ans=min(ans,(int)s.size());
        }
        cout<<ans<<endl;
        
        
       
    }
}