#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    stack<char> ch1;
    stack<char> ch2;
    int c=0;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch == '('){
            ch1.push(ch);
        }
        else if( ch == ')'){
            if(ch1.size() > 0){
                if(ch1.top() == '(')    {ch1.pop(); c++;}
                else                    ch1.push(ch);
            }
        }
        else if(ch == '['){
            ch2.push(ch);
        }
        else if( ch == ']'){
            if(ch2.size() > 0){
                if(ch2.top() == '[')    {ch2.pop(); c++;}
                else                    ch2.push(ch);
            }
        }
    }
    cout<<c<<endl;



    
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    int T=1;
	cin >> T;
	while(T--) 
        solve();
    return 0;
}