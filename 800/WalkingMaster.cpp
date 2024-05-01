#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
       int x1,y1,x2,y2;
       cin>>x1>>y1>>x2>>y2;
       if(y1>y2){
        cout<<-1<<endl;
        continue;
       }
       int aa=x1+y2-y1;
       if(aa<x2){
        cout<<-1<<endl;
       }
       else{
        cout<<(y2-y1)+abs(aa-x2)<<endl;
       }
        
    }
    return 0;
}