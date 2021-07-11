#include <bits/stdc++.h>
using namespace std;


int main (){ 
  int n;
  cin >>n;
  while(n--){
    int x,y;
    cin >>x>>y;
    string s;
    cin >>s;
    int poss=0;
    int L=0,R=0,U=0,D=0;

    L = std::count(s.begin(),s.end(),'L');
    R = std::count(s.begin(),s.end(),'R');
    U = std::count(s.begin(),s.end(),'U');
    D = std::count(s.begin(),s.end(),'D');

    //cout<<R<<U;

    
        if(x > R) poss=1;
        if(x*-1 > L) poss =1; 
    
        if(y > U) poss=1;
        if(y*-1 > D) poss =1; 
    

    if(poss == 0) cout << "YES"<<endl;
    else cout << "NO"<<endl;

      
  }

}