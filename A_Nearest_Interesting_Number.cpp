#include <bits/stdc++.h>
using namespace std;
int sumOfDigit(int n){
    int sum=0;
    while(n>0){
        sum +=n%10;
        n/=10;
    }
    return sum;

}


int main (){ 
    int n;
    cin >> n;
    while(true){
        if(sumOfDigit(n) % 4 == 0 ) {cout<<n; break;}
        else n++;

    }
}