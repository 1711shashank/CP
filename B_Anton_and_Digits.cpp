#include <bits/stdc++.h>
using namespace std;

int main (){

    int n2,n3,n5,n6;
    cin >>n2>>n3>>n5>>n6;
    int sum=0;
    int min = std::min(n2,std::min(n5,n6));
    n2 -= min;
    n5 -= min;
    n6 -= min;
    //cout<<min<<" ";
    while(min--){
        sum+=256;
    }   

    min = std::min(n2,n3);
    //cout<<min<<" ";
    while(min--){
        sum+=32;
    }
    cout<<sum;

    
     

}