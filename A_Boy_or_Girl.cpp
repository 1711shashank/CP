#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    set<int> st;
    for(int i=0;i<s.length();i++){
        st.insert(s.at(i));
    }
    if(st.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}