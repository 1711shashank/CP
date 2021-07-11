#include <bits/stdc++.h>
using namespace std;

bool unique(int n){
    string s= to_string(n);

    sort(s.begin(),s.end());

    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) return false;
    }
    return true;
}


int main (){ 
   int l,r;
   cin >> l >> r;
   int z=0;
   for(int i=l;i<=r;i++){
       if(unique(i)){
           cout<<i;
           z=1;
           break;
        }
    }
    if(z==0) cout<<-1;

   

}