#include <bits/stdc++.h>
using namespace std;

int main (){
    string s;   
    getline(cin, s);

    // cout<<s<<endl;

    set<char>st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        
        if(ch>=97 && ch <=122){
            st.insert(ch);
        }
    }

    cout << st.size();

           

}
