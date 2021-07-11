#include <bits/stdc++.h>
using namespace std;

int main (){

    int r,b; cin >>r>>b;

    int min = std::min(r,b);
    cout<<min<<" ";

    r-=min;
    b-=min;

    cout<<( std::max(r,b)/2);

    
}
