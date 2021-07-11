#include <bits/stdc++.h>
using namespace std;

int solve( int n){
    int numDigit = 1,temp = 1;
    int c=0;

    while( true ){
        
        c += numDigit; 
        numDigit++; 

        if(n == temp) return c;
        else{
            if( 1000 < temp)  {              
                temp = (temp % 10) +1;
            }
            else{
                temp = (temp * 10) + (temp % 10);
            }
            
        }

        if(numDigit == 5 ) numDigit = 1;
        if( temp > 9999) return c; 
            
    }

}

int main(){
    int t; cin>>t;
    while(t-->0){
        int n; cin >>n;
        cout << solve(n) << endl;
    }

    return 0;
}