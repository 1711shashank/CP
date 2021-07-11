#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    cin>>n;
    string s; cin>>s;
    int c=0;

    vector<int> v;
    char ch;

    for(int i=0;i<n;i++){
        ch = s[i];
        if(ch == 'W'){
            if(c != 0){
                v.push_back(c);
                c=0;
            }
        }
        else {
           c++;
        }
    
    }
    if(c != 0){
        v.push_back(c);
        c=0;
    }
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}