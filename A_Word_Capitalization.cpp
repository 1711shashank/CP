#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char ch = toupper(s.at(0));
    
    string newS = ch + s.substr(1); 
    cout << newS;

    return 0;
}