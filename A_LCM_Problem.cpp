#include <bits/stdc++.h>
using namespace std;

int main (){

    int t; cin >>t;
    while(t--){
        int a,b;cin >>a>>b;
        if(2*a > b) cout<<-1<<" "<<-1<<endl;
        else cout<<a<<" "<<2*a<<endl;
    }

}