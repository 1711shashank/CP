#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int y,b,r;
    cin >>y>>b>>r;
    int min = std::min(y+2, std::min(b+1,r));
    cout<<min*3-3;  //-3 because added +1 and +2 in  b and y respectively
    

}