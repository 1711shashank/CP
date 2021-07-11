#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    cin >> a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i] == 1){
            v.push_back(a[i-1]);
        }
    }
    cout<< v.size()+1<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<a[n-1];

    
    

}