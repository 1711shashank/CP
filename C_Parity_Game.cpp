#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1>>s2;
    int noa = 0;
    int nob = 0;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == '1')
            noa++;
    }
    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == '1')
            nob++;
    }
    
    if(noa%2 == 1) noa++;
    if(noa%2 == 0 && nob>noa)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;    
}