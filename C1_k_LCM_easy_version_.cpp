#include <bits/stdc++.h>
using namespace std;
bool checkPrimeNumber(int n) {
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        int sq =  std::sqrt(n/2);
        for (int i = 2; i <= sq+1; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main (){
    int T;  cin>>T;
    while(T--){

        int n,k;
        cin >>n>>k;
        if(n%2 != 0) cout<< 1 << " "<< n/2 << " " << n/2<<endl;
        else if(n%2==0 && n%4 !=0 ) cout<< 2 << " "<< n/2-1 << " " << n/2-1<<endl;
        else cout<< n/2 << " "<< n/4 << " " << n/4<<endl;
    }

}