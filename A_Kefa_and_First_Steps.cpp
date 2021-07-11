#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >> n;
    int a[n];

    int max=0,c=0;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i-1] <= a[i]){
            c++;
        }
        else {
            if(max <= c)
            max=c;
            c=0;
        }
    }
    if(max <= c){
            max=c;
            c=0;
    }


    cout<< max+1;


    return 0;
}
