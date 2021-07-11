#include <bits/stdc++.h>
using namespace std;


int main (){ 
    
        int n;
        cin>>n;
        int a[n];
        set<int>st;
        vector<int> v;
        for(int i=0;i<n;i++){
                cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){

                if(st.find(a[i]) == st.end()){
                        st.insert(a[i]);
                        v.push_back(a[i]);
                }
        }
        cout<<v.size()<<"\n";
        for(int i=v.size()-1;i>=0;i--){
                cout<<v[i]<<" ";
        }
        
}