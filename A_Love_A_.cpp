#include <bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;
    int a=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='a') a++;
        
    }
    if(2*a-1 < s.length())  cout<<2*a-1;
    else cout<< s.length();
    

    
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    // int T=1;
	// cin >> T;
	// while(T--) 
        solve();
    return 0;
}