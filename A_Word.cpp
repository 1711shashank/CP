#include <bits/stdc++.h>
using namespace std;

int main (){

    string s;
    cin >> s;

    int upper=0,lower=0;

    for(int i=0;i< s.length();i++){

        int ch = s.at(i);
        // cout << ch << " ";
        if(ch >= 65 && ch <= 90)  upper++;
        else lower++;
    }
    if(upper > lower){
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
    }
    else{
       transform(s.begin(), s.end(), s.begin(), ::tolower); 
    }

    cout << s;
    return 0;
}
