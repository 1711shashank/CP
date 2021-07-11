#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int T;
    cin>>T;
    while(T--){
        int n; cin>>n;
        int a[n];
        int sum=0,c = 0; 
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+= a[i];
            if(a[i] == 0) c++;
        }
        if(sum + c == 0) cout<<c+1<<"\n";

        else cout<<c<<"\n";
        
    }

}