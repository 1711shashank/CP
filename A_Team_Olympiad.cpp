#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;cin >>n;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp == 1)   a.push_back(i+1); 
        if(temp == 2)   b.push_back(i+1); 
        if(temp == 3)   c.push_back(i+1); 
    }
    int min = std::min (a.size(), std::min (b.size(),c.size()));
    cout << min <<endl;

    if(min >0){
        for(int i=0;i<min;i++){
            cout<< a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
        }
    }
    

}