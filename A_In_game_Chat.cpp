#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    cin >> n;
    while(n--){
        int l;
        cin >> l;
        string s;
        cin >> s;
        int c=0;

        for(int i=l-1;i>=0;i--){
            if(s[i]==')') c++;
            else break;
        }
        if(l-c >= c) cout<<"No\n";
        else cout<<"Yes\n";

    }

    
    

}