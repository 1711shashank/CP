#include <bits/stdc++.h>
using namespace std;

int main (){

    int t; cin >>t;
    while(t--){
        int n;
        cin >> n;

        set<int> s;
        int temp;

        for(int i=0;i<n*2;i++){
            cin >> temp;
            if(s.count(temp) ==0)
                cout<<temp<<" ";
            s.insert(temp);
        }
        
        s.empty();
        cout<<endl;
    }
}

