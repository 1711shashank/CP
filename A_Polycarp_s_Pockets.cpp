#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n;
    cin >> n;
    int temp;
    
    map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>temp;
        mp[temp]++;
    } 
    // for(auto it : mpp) {
	// 	cout << it.first << " " << it.second << endl; 
	// }
    int max=0;
    int maxIndex;
    for( auto it : mp){
        if(max < (it).second){
            max = (it).second;
            maxIndex = (it).second;
        }
    }  
    cout<<maxIndex;

}