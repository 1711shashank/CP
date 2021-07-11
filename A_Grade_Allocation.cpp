#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    cin >> n;
    while(n--){
        int n,m;cin>>n>>m;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i!=0) sum+=a[i];
        }
        if(sum+a[0]>=m)  cout<<m<<"\n";
        else cout<<sum+a[0]<<"\n";


    }

    
    

}