#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define inS(a)                      string s; cin>>s;
#define in1(a)                      int a;          cin>>a;
#define in2(a, b)                   int a, b;       cin >> a >> b;
#define in3(a, b, c)                int a, b, c;    cin >> a >> b >> c;

#define InVec(v,n)               vector<int> v(n); fl(i,0,n) cin>>v[i];
#define InArr(a,n)               int a[n]; fl(i,0,n) cin>>a[i];
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n

void solve(){
    in1(n);
    InArr(a,n);
    fl(i,0,n){
        if(i==0){
            printls( a[i+1] - a[i]);
            println( a[n-1] - a[i]);
        }
        else if( i==n-1){
            printls( a[i] - a[i-1]);
            println( a[i] - a[0]);
        }
        else{
            printls( std::min(a[i]-a[i-1],a[i+1]-a[i]));
            println( std::max(a[n-1]-a[i],a[i]-a[0]));
        }
    }

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
    // return 0LL;
}