#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int T;
    cin >>T;
    
    while(T--){
        int n;cin>>n;
        if(n==1) {
            cout<<0<<endl;
            continue;
        }
        if(n==2) {
            cout<<1<<endl;
            continue;
        }
        if(n==3){
            cout<<2<<endl;
            continue;
        }
        else{
            if(n%2==0) cout<<2<<endl;
            else cout<<3<<endl;
        }
        
    }

}