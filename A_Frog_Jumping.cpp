#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n; cin >>n;
    while( n-- ){
        long long a,b,k;
        cin >> a>> b>>k;
        
        cout<< (((k+1)/2)*a)- ((k/2)*b)<<endl;
    }

}