#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    string p="";

    int c[26]={0};

    for(int i=0;i<s.length();i++){
        c[s[i]-97]++;
    }
    char ch = 'a';
    for(int i=0;i<26;i++){

        if(c[i] % k != 0){
            cout << -1;
            return;
        }
        else {
            int temp = c[i] / k;
            while(temp--){
                p+=ch;
            }
        }
        ch++;
        
    }
    while(k--){
        cout << p;
    } 


}

int main (){

    solve();
    return 0;
    
}
