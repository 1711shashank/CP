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
    in1(n);

    vector<ll> v;
    ll p=1;

    fl(i,1,n){
        if(__gcd(i,n) == 1){
            v.pb(i);
            p= p*i % n;
        }
    }


    if(p != 1){
        vector <ll> v1;
        fl(i,0,v.size()){
            if( p == v[i]) continue;

            v1.pb(v[i]);
        }

        v=v1;

        // println(v1.size());
        
        // fl(i,0,v1.size()){
        //     printls(v1[i]);
        // }
        // return;
    }
    println(v.size());
    fl(i,0,v.size()){
        printls(v[i]);
    }
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