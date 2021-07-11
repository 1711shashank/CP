#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int n;
    cin >> n;
    int max = 0,capcity=0;

    while(n--){
        int a,b;
        cin >> a >> b;
        
        capcity = capcity - a + b;

        // cout << max;

        if(capcity > max) max = capcity;
    }

    cout << max;

}
