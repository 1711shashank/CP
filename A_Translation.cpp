#include <bits/stdc++.h>
using namespace std;

int main (){

    string s1,s2;   cin>>s1>>s2;
    int l=s2.length();
    
    int k=l-1;
    int z=0;
    for(int i=0;i<l;i++){
        if(s1[i]!=s2[k--]){
            cout<<"NO";
            z=1;break;
        }
        
    }
    if(z==0){
        cout<<"YES";
    }
}
