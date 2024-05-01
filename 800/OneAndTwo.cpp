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
        int twoC=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                twoC++;
            }
        }
        if(twoC%2){
            cout<<-1<<endl;
        }
        else{
            int k=0;
            if(k==twoC/2){
                cout<<1<<endl;
            }
            for(int i=0;i<n;i++){
                
                if(a[i]==2){
                    k++;
                    if(k==twoC/2){
                        cout<<i+1<<endl;
                    }

                }
            }
        }
    }
}