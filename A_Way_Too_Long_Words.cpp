#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n-->0){
        string s;
        cin>> s;
        if(s.length() <= 10)
            cout << s<<endl;
        else {
            cout << s.at(0) << s.length()-2 << s.at(s.length()-1) << endl;
        }
        s="";
    }
    return 0;
}