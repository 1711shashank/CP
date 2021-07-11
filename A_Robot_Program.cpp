#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int T;
    cin >>T;
    
    while(T--){
        int x,y;cin>>x>>y;
        
        int min = std::min(x,y);

        x-=min;
        y-=min;

        int max = std::max(x,y);

        if(max == 0) cout<< min*2<<"\n";
        else if(max == 1) cout<< min*2 + max<<"\n";
        else{
            cout<< min*2 +(max*2)-1<<"\n";
        }
        
    }

}