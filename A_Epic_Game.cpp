#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int main (){

    int a,b,n;
    cin >>a>>b>>n;
    int Simon = 1;
    while(n>0){
        n = n - gcd(a,n);
        Simon = 0;
        if(!n>0) break;
        n = n - gcd(b,n);
        Simon = 1; 
    }

   cout<<Simon;
   

}