#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;cin >>n;
    string A[n];
    string s;   
    int z=0;
    for(int j=0;j<n;j++){
        cin >> s;
        if(z==0){
           
            for(int i=1;i<5;i++){
                if(s[i-1]=='O' && s[i]=='O'){
                    s[i-1]='+';
                    s[i]='+';
                    
                    z=1;   break;

                }
            }
            

        }
        
        A[j]=s;        
    }
    if(z==0) cout<<"NO";
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<A[i]<<endl;
        }
    }

}