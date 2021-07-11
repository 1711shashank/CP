#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int a,b,i; cin>>a>>b;
    int c1=0,c2=0;
    // int A[6] = {1,2,3,4,5,6};
    for(i=1; i<7; i++){
        if(std::abs(a-i) < std::abs(b-i)) c1++;
        if(std::abs(a-i) > std::abs(b-i)) c2++;

    }
    cout<< c1 << " " << 6-(c1+c2) << " " << c2;
    

}