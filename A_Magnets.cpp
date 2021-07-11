#include <bits/stdc++.h>
using namespace std;

int main (){

   int n;
   cin >>n;

   int f,s;
   int c=1;
   cin >> f;

   n--;

   while(n--){
       cin >> s;
       if(f!=s) c++;

       f=s;

   }
   cout<<c;
    return 0;
}
