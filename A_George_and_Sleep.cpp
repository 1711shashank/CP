#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define pb                          push_back


#define fl(i,a,b)                   for(ll i=a;i<b;i++)

#define inS(s)                      string s; cin>>s;
#define in1(a)                      ll a;          cin>>a;
#define in2(a, b)                   ll a, b;       cin >> a >> b;
#define in3(a, b, c)                ll a, b, c;    cin >> a >> b >> c;

#define InVec(v,n)               	vector<ll> v(n); fl(i,0,n) cin>>v[i];
#define InArr(a,n)               	ll a[n]; fl(i,0,n) cin>>a[i];
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n
#define ln  						cout << endl

void solve(){
    inS(s);
    inS(t);
    ll hs,ms,ht,mt;

    hs = stoi( s.substr(0,2) );
    ms = stoi( s.substr(3,2) );

    ht = stoi( t.substr(0,2) );
    mt = stoi( t.substr(3,2) );


    ll ptime = ((hs*60) + ms) - ((ht*60) + mt);


    if( ptime < 0) ptime = 1440 + ptime;

    ll hh = ptime/60;
    ll mm = ptime%60;

    if(hh < 10) print(0); print(hh);
    print(':');
    if(mm < 10) print(0); println(mm);



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