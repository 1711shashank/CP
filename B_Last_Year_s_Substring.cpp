#include <bits/stdc++.h>
using namespace std;

void subString(string word, int l){

    
    for(int i=0;i<=4;i++){
             if (word.substr(0, i) + word.substr(l-4+i, 4-i) == "2020") {    cout<<"YES"<<endl;
                return;
            }
            
        }
        cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;

    while(t-->0){ 
        int l; cin>>l;
        string s;
        cin >> s;
        subString(s,l);
    }

    return 0;
}