#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int n; cin >>n;
    while(n--){
        string s; cin >>s;
        s=s+'0';
        int c=1;
        vector<int> v;
        for(int i=0;i<s.length();i++){
            if(s[i-1]=='1'){
                if(s[i-1] == s[i]){
                    c++;
                }
                else{
                    v.push_back(c);
                    c=1;
                }
            }
        }
        if(v.size()==0) v.push_back(0);
        sort(v.begin(),v.end(),greater<int>());
        int sum=0;
        for(int i=0;i<v.size();i+=2){
            sum+=v[i];
        }


        // for (auto it = v.begin(); it != v.end(); it++) {
		//     cout << *(it) << " ";
	    // }
        cout<<sum<<endl;
    }

}