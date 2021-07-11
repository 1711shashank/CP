#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    char ch,ch1;

    for(int i=0;i<s.length();i++){
        ch = s.at(i);

        if(ch=='.'){
            cout << '0';
        }
        if(ch=='-'){
            i++;
            ch1=s.at(i);
            if(ch1=='.'){ cout<<'1';}
            if(ch1=='-'){ cout<<'2';}
        }
        
    }

    return 0;
}
