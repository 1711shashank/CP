#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t-->0){
        int n,temp=0;
        cin >> n;
        int a[n];
        for(int i=0;i < n; i++){
            cin >> a[i];
        }
        int start=0, end =n-1;
        int a1[n];
        while(start <= end){
            a1[temp++] = a[start++];
            a1[temp++] = a[end--];
        }
        for(int i=0;i < n; i++){
            cout << a1[i]<<" ";
        }

        cout<<endl;

    }

    return 0;
}