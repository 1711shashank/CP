#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int x,y,z;  cin>>x>>y>>z;
    int a,b,c;  cin>>a>>b>>c;

    if( x<=a && y<=a+b-x && z<=a+b+c-x-y)   cout<<"YES\n";
    else cout<<"NO\n";

    
    

}