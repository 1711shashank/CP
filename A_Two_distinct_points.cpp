#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int T;
    cin>>T;
    while(T--){
        int l1,r1,l2,r2;
        cin >>l1>>r1>>l2>>r2;
        int a=(l1+r1)/2;
        int b=(l2+r2)/2;

        if(a==b && b+1<=r2) b++;
        else if(a==b && b-1>=l2) b--;

        cout<<a<<" "<<b<<endl;

        
    }

}