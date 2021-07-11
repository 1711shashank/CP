#include <bits/stdc++.h>
using namespace std;


int main (){ 
  int T;
  cin >>T;
    
    while(T--){
        int n,k1,k2;    cin>>n>>k1>>k2;
        int w,b;    cin>>w>>b;

        int K= k1+k2;
        if(K >= 2*w && (n*2)-K >= 2*b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}