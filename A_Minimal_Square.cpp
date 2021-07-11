#include <bits/stdc++.h>
using namespace std;

int main (){

    int T;  cin >>T;
    while(T--){
        int l,b;
        cin >> l>>b;
        
        int min = std::min(l,b);
        int max = std::max(l,b);
        if(min*2 >= max) cout<<(min*2)*(min*2)<<endl;
        else cout<<(max*max)<<endl;
 
    }
}