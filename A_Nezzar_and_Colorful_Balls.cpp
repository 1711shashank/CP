#include <bits/stdc++.h>
using namespace std;


int main (){ 

    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int temp;

        int a[n+1]={0};
        for(int i=1;i<=n;i++){
            cin >> temp;
            a[temp]++;
        }
        int max=0;
        for(int i=1;i<=n;i++){
            max = std::max(a[i],max);
        }
        cout<< max <<endl;


    }

}