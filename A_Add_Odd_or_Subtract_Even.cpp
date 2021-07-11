#include <bits/stdc++.h>
using namespace std;

int main (){

    int t; cin >>t;
    while(t--){
        int a,b; cin >>a>>b;
        int c=0;
        if(a==b) {cout<<0<<endl; continue;}
        if( b > a){
            if((b-a)%2 == 0) {cout<<2<<endl;    continue;}
            else {cout<<1<<endl;  continue;}
        }
        if(b < a) {
            if((b-a)%2 == 0){ cout<<1<<endl;  continue;}
            else {cout<<2<<endl; continue;}
        }
    }

}