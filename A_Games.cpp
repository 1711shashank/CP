#include <bits/stdc++.h> 
using namespace std; 

int main (){

    int n; cin >> n;
    int home[n];
    int gest[n];
    for(int i=0;i<n;i++){
        cin >> home[i] >> gest[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(home[i] == gest[j] && (i != j)){
                c++;
            }
        }
    }
    cout<<c;

   
    return 0;  
}

