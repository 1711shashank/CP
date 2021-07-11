#include <bits/stdc++.h>
using namespace std;


int main (){ 
  int n;
  cin >>n;
    
    while(n--){
        string s;cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a') s[i]='b';
            else s[i] = 'a';

            i++;
            if(i > s.length()) break;

            if(s[i]=='z') s[i]='y';
            else s[i] = 'z';

        }
        cout<<s<<endl;
    }

}