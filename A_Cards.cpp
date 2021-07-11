#include <bits/stdc++.h>
using namespace std;


int main (){ 

    int N;cin >>N;
    string s; cin >>s;
    int z = count(s.begin(), s.end(), 'z');
    int n = count(s.begin(), s.end(), 'n');
    while(n--){
        cout<<1<<" ";
    }
    while(z--){
        cout<<0<<" ";
    }

}