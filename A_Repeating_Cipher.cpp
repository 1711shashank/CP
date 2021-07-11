#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    cin >>n;
    int c=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            c++;
        }
        if(c == s.length()) break;
        cout<<s[c];
    }


}