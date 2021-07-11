#include <bits/stdc++.h>
using namespace std;

bool distinct(int y){
    set<int> st;
    int c=0;
    while(y>0){
        st.insert(y%10);
        y/=10;
        c++;
    }
    if( c == st.size() ) return true;
    else return false;
}

int main(){

    int y;
    cin >> y;

    while(true){
        y++;
        if(distinct(y)){
            cout << y;
            break;
        }
    }

    return 0;
}
