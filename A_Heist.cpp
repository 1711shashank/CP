#include <bits/stdc++.h>
using namespace std;



int main (){ 
   int n; cin>>n;
   int a[n];
   int max,min;
   for(int i=0;i<n;i++){
       cin>>a[i];
    //    if(i==0){
    //        max=a[0];
    //        min=a[0];
    //    }
    //    if(max < a[i]) max = a[i];
    //    if(min > a[i]) min = a[i];
   }

   max = *max_element(a, a + n); 
   min = *min_element(a, a + n);

   cout<<( max - min) - n +1; 


   

}