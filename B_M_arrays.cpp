#include <bits/stdc++.h>
using namespace std;

int main (){
    int T;  cin>>T;
    while(T--){

        int c=0;
        int n,m;cin >>n>>m;
        map<int,int> mp;
        int temp;

        for(int i=0;i<n;i++){
            cin >> temp;
            mp[ temp % m ]++;
        }

        for(auto &it : mp){

            if(it.first == 0) c++;

            else if (2*it.first == m) c++;

            else if (2*it.first < m || mp.find(m - it.first) == mp.end()) {
                int A = it.second;              //value mp[i]
                int B = mp[m - it.first];       //value mp[m-i]

                c += 1 + max(0, abs(A-B)-1);    // +1 to add the remaining values
            }
        }
        cout<<c<<endl;
        
    }

}