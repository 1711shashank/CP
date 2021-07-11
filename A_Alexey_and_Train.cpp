#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    int a[n+1]; a[0]=0;
    int b[n+1]; b[0]=0;
    int c[n+1]; c[0]=0;
    int sum=0,temp;

    for(int i=1;i<=n;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }

    int currTime=0;
    for(int i=1;i<=n;i++){
        int t = a[i] - b[i-1] + c[i];
        currTime += t;
        if(i==n){
            cout<< currTime <<endl;
            break;
        }
        currTime += (b[i] - a[i] +1 )/2;
        if(currTime < b[i]) currTime = b[i];

    }
}

int main (){

    int T; cin >>T;
    while(T--){
        solve();


    }
    
}