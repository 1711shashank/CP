#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int max=1,c=1;
    for(int i=1;i<n;i++){
        if(a[i-1] < a[i]){
            c++;
        }
        else{
            if(max < c) {
                max=c;
            }
            c=1;
        }
    }
    if(max < c) {
        max=c;
    }
    cout<<max<<endl;

}
    

