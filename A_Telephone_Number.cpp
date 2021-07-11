#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        
        int n;  cin >>n;
        string s;   cin>>s;

        
            int pos = n;
            for(int i = 0; i < n; i++){
                if(s[i] == '8'){
                    pos = i;
                    break;
                }
            }
            
            if( n-11 >= pos ) cout<<"YES\n";
            else cout<<"NO\n";
    
        

    }
}