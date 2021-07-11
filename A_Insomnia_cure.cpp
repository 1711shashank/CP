#include <bits/stdc++.h>
using namespace std;
// string prime(int n){
//     for (int i = 2; i <= n / 2; ++i) {
//             if (n % i == 0) {
//                 return "false";
//             }
//         }
//     return "true";
// }


int main(){

    int k,l,m,n;    cin >>k>>l>>m>>n;
    int d;  cin >>d;
    int c=0;
    for(int i=1;i<=d;i++){
        if( i%k==0 || i%l==0 || i%m==0 || i%n==0){
            continue;
        }
        else c++;
    }
    cout<<d-c;
    
    
    return 0;

}
