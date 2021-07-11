#include <bits/stdc++.h>
using namespace std;

int main (){

    string s;
    cin >> s;
    int n = std::count(s.begin(), s.end(), '7');
    n += std::count(s.begin(),s.end(),'4');
    if(n==7 || n==4){
        cout<< "YES";
    }
    else cout<< "NO";

    
    return 0;
}
