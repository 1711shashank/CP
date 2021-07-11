#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >>n;
    int a[n];
    int b[n]={0};
    
    
    int l, r, sum=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] != 0){
            l = i-a[i] +1;
            if(l<0) l=0;
            r = i+1;
            if(r > n-1) r==n;
            b[l] += 1;
            b[r] -= 1;
        }
    }
   
    for(int i=0;i<n;i++){
        sum += b[i];
        if(sum == 0){
            cout<<0<<" ";
        }
        else    cout<<1<<" ";
        
    }
    cout<<endl;

    
}

int main (){

    int T; cin >>T;
    while(T--){
        solve();


    }
    
}