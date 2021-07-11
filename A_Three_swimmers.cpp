#include <bits/stdc++.h>
using namespace std;

int main (){

    int T; cin >> T;
    while(T--){
        int p, a,b,c;
        cin >> p >> a >> b >> c;

        int a1,b1,c1;
        a1 = a - p%a;
        b1 = b - p%b;
        c1 = c - p%c;

        if(a1 == a) a1=0;
        if(b1 == b) b1=0;
        if(c1 == c) c1=0;

        cout << std::min(a1, std::min(b1,c1)) <<endl;        
    
    }
    return 0;
}
