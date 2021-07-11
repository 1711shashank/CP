#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    cin >> n;
    int a=0,b=0,c=0;
    if(n==1) {
        cin>>a;
        cout<<"chest\n";
    }
    else if(n==2){
        cin >>a>>b;
        if(b>a) cout<<"biceps\n";
        else   cout<<"chest\n";
    }
    else{
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            a+=temp;
            i++;
            if(i==n) break;

            cin>>temp;
            b+=temp;
            i++;
            if(i==n) break;

            cin>>temp;
            c+=temp;     

        }
        if(a>b && a>c) cout<<"chest\n";
        else if(b>c)  cout<<"biceps\n";
        else   cout<<"back\n";

    }

}