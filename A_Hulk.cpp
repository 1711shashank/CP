#include <bits/stdc++.h>
using namespace std;

int main (){

    int n; cin >> n;

    cout<< "I hate ";
    n--;
    while(true){

        if(n==0) break;
        cout<<"that I love ";
        n--;
        if(n==0) break;
        cout<<"that I hate ";
        n--;

    }
    cout<<"it";

    return 0;
}
