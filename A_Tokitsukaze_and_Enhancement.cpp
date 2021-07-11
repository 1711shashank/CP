#include <bits/stdc++.h>
using namespace std;
#define int                         long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define VecInput(v,n)               vector<int> v(n); fl(i,0,n) cin>>v[i];
#define ArrInput(a,n)               int arr[n]; fl(i,0,n) cin>>a[i];
#define StrInput(s)                 string(s); cin >> (s);
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n

void solve(){
    int n;cin>>n;

    if(n%4 == 1) cout << 0 << " " << 'A';
    else if( n%4 == 2) cout << 1 << " " << 'B';
    else if( n%4 == 3) cout << 2 << " " << 'A';
    else if( n%4 == 0) cout << 1 << " " << 'A';

}
//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    // int T=1;
	// cin >> T;
	// while(T--) 
        solve();
        
    return 0;
}