#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    long long x;
    int c=0;
    cin >>n>>x;
    while(n--){
        char ch;
        long long d;
        cin >>ch>>d;
        if(ch=='+'){
            x+=d;
        }
        if(ch=='-'){
            if(x>=d){
                x -=d;
            }
            else c++;
        }
    }
    cout << x << " "<<c;

}