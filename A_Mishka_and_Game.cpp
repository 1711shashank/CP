#include <bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >>t;
    int m,m1=0,c,c1=0;
    while(t--){
        cin >> m >>c;
        if( m > c)  m1++;
        if( m < c)  c1++;
    }
    if(m1 > c1) cout << "Mishka";
    if(m1 < c1) cout<< "Chris";
    if(m1 == c1) cout << "Friendship is magic!^^";
    

}