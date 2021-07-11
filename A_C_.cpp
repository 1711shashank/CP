#include <bits/stdc++.h>
using namespace std;

int main (){

    int T;cin>>T;

    while(T--){
        int c=0;
        int a,b,n;  cin>>a>>b>>n;
        if(a > n || b > n){ cout<<0<<endl; continue;}
        if(b<a) swap(a,b);
        while( b <= n){
            //cout<<a+b<<" ";

            c++;
            int temp = a+b;
            a=b;
            b=temp;
        }
        cout<<c<<endl;
    }

}