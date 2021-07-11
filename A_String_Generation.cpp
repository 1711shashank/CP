#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int T;
    cin >> T;
    while(T--){
        int n,k;
        cin>>n>>k;
        int c=0;
        char ch='a';
        while(c<n){
            for(int i=0;i<k;i++){
                cout<<ch;
               
                c++;
                if(c>=n) break;
                
                
            }
            ch++;
            if(ch=='d') ch='a';
            
        }
        cout<<endl;
    }

    
    

}