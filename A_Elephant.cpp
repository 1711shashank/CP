#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int x;
    cin >> x;
    int steps=0;

  
        if(x/5 != 0) {steps += x/5; x=x%5;}
        if(x/4 != 0) {steps += x/4; x=x%4;}
        if(x/3 != 0) {steps += x/3; x=x%3;}
        if(x/2 != 0) {steps += x/2; x=x%2;}
        if(x/1 != 0) {steps += x/1; x=x%1;}

        cout << steps;
    
    
    


    return 0;

}
