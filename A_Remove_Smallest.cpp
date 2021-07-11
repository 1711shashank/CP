#include <bits/stdc++.h>
using namespace std;

int main (){

    int T;  cin >>T;
    while(T--){
        int n;  cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int z=0;
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if( std::abs(a[i-1] - a[i]) < 2 ){
                continue;
            }
            else{
                cout<<"NO\n";
                z=1;
                break;
            }
        }
        if(z==0){
            cout<<"YES\n";
        }
    }

    
}
