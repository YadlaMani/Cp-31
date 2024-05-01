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
        string str;
        cin>>str;
        int num=0,curr=0;
        
        for(int i=0;i<n;i++){
            if(str[i]=='.'){
                curr++;
            }
            else{
                num=max(num,curr);
                curr=0;
            }
        }
        num=max(num,curr);
        if(num>2){
            cout<<2<<endl;
        }
        else{
            cout<<count(str.begin(),str.end(),'.')<<endl;
        }
    }

}
