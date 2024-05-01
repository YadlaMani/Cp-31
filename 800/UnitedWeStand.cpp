#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]==a[n-1]){
            cout<<"-1"<<endl;
        }
        else{
            map<int,int>mp;
            for(int i=0;i<n;i++){
                mp[a[i]]++;
            }
            vector<int>b;
            int n1=0,n2=0;
            for(auto i:mp){
                b.push_back(i.first);
                n1+=i.second;
            }
            n1-=mp[a[n-1]];
            cout<<n1<<" "<<mp[a[n-1]]<<endl;
            for(int i=0;i<b.size()-1;i++){
                for(int j=0;j<mp[b[i]];j++){
                    cout<<b[i]<<" ";
                }
            }
            cout<<endl;
            for(int j=0;j<mp[a[n-1]];j++){
                cout<<a[n-1]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}