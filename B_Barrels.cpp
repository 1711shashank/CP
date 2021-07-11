#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T; cin >> T;
    while(T--){
        
        ll n,k;  cin >>n>>k;
        ll a[n];

        
        for(ll i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<long long>()); 
        ll max=a[0];
        
        for(ll i = 1; i <= k; i++){
            max+=a[i];            
        }
        cout<<max<<"\n";

    }
}