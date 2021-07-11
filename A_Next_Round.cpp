#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];

    int temp;

    for(int i=0;i<n;i++){
        cin>> a[i];
        if(i==k-1) temp=i;
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i] >= a[temp] && a[i] > 0)
        c++;
    }
    cout<< c;


    return 0;
}