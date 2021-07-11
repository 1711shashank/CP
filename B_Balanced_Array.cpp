#include <bits/stdc++.h>
using namespace std;

int main (){

    int T;   cin >> T;
    while(T--){

        int n; cin >> n;
        n/=2;
        if(n%2 == 0){
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++){
                cout<< i*2 <<" ";
            }
            for(int i=1;i<n;i++){
                cout<< i*2 -1<<" ";
            }
            cout<< 3*n-1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }        
    }

}