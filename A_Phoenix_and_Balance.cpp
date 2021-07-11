#include <bits/stdc++.h>
using namespace std;

int main (){

    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int start = 1,end = (n/2)+1;
        int a=0,b=0;
        for(int i = 1; i < (n/2)+1; i++){
            a+=std::pow(2,start++);
            b+=std::pow(2,end--);
        }
        // cout<< a <<" "<<b<<endl;
        cout << std::abs(a-b)<<endl;
    }

}