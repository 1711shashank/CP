#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define inS(s)                      string s; cin>>s;
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
    
    ll n;cin>>n;

    ll a[n];
    ll mx=INT_MIN,mn=INT_MAX;
    for(ll i=0;i<n;i++){
        cin>>a[i];

        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }
    int st=0,end=0;

    for(ll i=0;i<n;i++){
        if(mx == a[i]) end++;
        if(mn == a[i]) st++;
    }
    // printls(end);println(st);
    if(mn == mx) println(0);
    else println(n -(end + st));



}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    // int T;
	// cin >> T;
	// while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}