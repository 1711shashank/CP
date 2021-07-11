#include <bits/stdc++.h>
using namespace std;


int main (){
    int n;
    cin>>n;
    int temp;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>> temp;
        a[temp]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}