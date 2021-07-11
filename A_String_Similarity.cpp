#include <bits/stdc++.h>
using namespace std;

int main (){

    int T;cin>>T;

    while(T--){
        int n;
        cin >>n;
        string s; cin>>s;
        int n1 = std::count(s.begin(), s.end(), '1');
        int n0 = std::count(s.begin(), s.end(), '0');
        int temp = (n1 > n0) ? 1 : 0;
        for(int i=0;i<n;i++){
            cout<<temp;
        }
        cout<<endl;
    }

}