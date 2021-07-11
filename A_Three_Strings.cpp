#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    cin >> n;
    while(n--){
        string a,b,c;
        cin >>a>>b>>c;
        int z=0;
        
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i] && (c[i]==a[i] || c[i]==b[i])){
                continue;
            }
            else if(c[i]==b[i] && b[i]==c[i]){
                continue;
            }
            else{
                z=1;
                cout << "NO\n";
                break;
            }
        }
        if(z==0){
            cout << "YES\n";
        }
        
    }

    
    

}