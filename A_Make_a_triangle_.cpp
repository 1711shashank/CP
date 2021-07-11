#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a,b,c;
   cin >> a >> b >> c;

   int sum = a+b+c;
    

    int min = std::min({a,b,c});
    int max = std::max({a,b,c});
    int mid = sum-max-min;

     

    int cnt=0;
    while(true){
        if(min+max > mid && min+mid > max && max+mid > min){
            cout<<cnt;
            return;
        }
        else{
            cnt++;
            mid++;
        }


    }


    
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    // int T=1;
	// cin >> T;
	// while(T--) 
        solve();
    return 0;
}