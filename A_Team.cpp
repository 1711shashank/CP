#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int c=0;
    while(n--){

        int sum =0;
        int a[3];
        for(int i=0; i<3;i++){
            cin >> a[i];
            sum+=a[i];            
        }   
        if(sum >= 2){
            c++;
        }   
    }
    cout << c;  

    return 0;
}