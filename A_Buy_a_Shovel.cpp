#include <bits/stdc++.h>
using namespace std;

int main (){

   int k,r; cin >> k>>r;
   int i=0;
   while(true){
       i++;
       if( ((k*i)-r)%10==0 || (k*i)%10==0){
           cout << i;
           break;

       }

   }

}