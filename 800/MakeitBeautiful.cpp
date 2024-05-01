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
        set<int>st;
        int flag=INT_MIN;
        for(int i=0;i<n;i++){
            st.insert(a[i]);
            flag=max(flag,a[i]);
        }
        if(st.size()==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<flag<<" ";
        
        for(int i=0;i<n;i++){
            if(flag!=a[i]){
                cout<<a[i]<<" ";
            }
            else{
                flag=-1;
            }
        }
        cout<<endl;
    }
}