#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >> n;

    int a[n];
    int max = 0;
    int sum=0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(max < a[i]) max = a[i];
        sum+=a[i];
    }
    cout<<(n*max)-sum;


}