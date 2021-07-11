#include <bits/stdc++.h>
using namespace std;

int main (){

    int t; cin >>t;
    while(t--){
        int a,b,c,n;    cin >>a>>b>>c>>n;
        int max = std::max(a,std::max(b,c));
        int sum = (a+b+c+n);
        //cout<<sum%3;
        if(sum%3==0 && sum/3 >= max){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

}