#include <bits/stdc++.h>
using namespace std;

int main (){

    int T,temp; cin >>T; int c=0;

    int X;  cin >> X;

    set<int> st;

    for(int i=0;i<X;i++){
        cin >> temp;
        st.insert(temp);
    }

    int Y;  cin >> Y;
    for(int i=0;i<Y;i++){
        cin >> temp;
        st.insert(temp);
    }

    for(int i=1;i<=T;i++){
        if(st.count(i)){
            continue;
        }
        else{
            c=1;
            cout<< "Oh, my keyboard!";
            break;
        }
    }
    if(c==0){
        cout<<"I become the guy.";
    }

}
