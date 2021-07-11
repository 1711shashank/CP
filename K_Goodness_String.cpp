#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n,k; cin>>n>>k;
    string s;
    cin>>s;
    s='0'+s;
    int c=0;

    for(int i=1;i<=n/2;i++){
        // cout<<s[i] << " "<<s[n-i+1]<<endl;
        
        if( s[i] != s[n-i+1]){
            c++;
        }
    }
    // cout<<c<<endl;
    return std::abs(k-c);    
    
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    int T=1;
	cin >> T;
    int z=1;
	while(T--) {
        int c = solve();
        cout<<"Case #"<< z++ <<": "<<c<<endl;

    }
    return 0;
}