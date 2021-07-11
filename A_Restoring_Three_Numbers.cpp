#include <bits/stdc++.h>
using namespace std;

int main (){

   int a[4];
   int max=0;
    for(int i=0; i<4; i++){
        cin >> a[i];
        if(a[max] < a[i]) max=i;
    }

    for(int i=3; i>=0; i--){
        if(i!=max){
           cout<< a[max]-a[i] <<" ";
 
        }
    }

}