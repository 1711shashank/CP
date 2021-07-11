#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int T;
    cin >>T;
    
    while(T--){
        int n,m;cin>>n>>m;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        
        if(sum == m){cout<<"YES\n";}
            else cout<<"NO\n";

    }
}