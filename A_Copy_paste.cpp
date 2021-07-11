#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    int min =a[0];
    int ans=0;
    for(int i=1;i<n;i++){
        ans += (k-a[i]) / min;
    }
    cout<<ans<<endl;


    
    

    
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    int T=1;
	cin >> T;
	while(T--) 
        solve();
    return 0;
}