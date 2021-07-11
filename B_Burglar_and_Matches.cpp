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

#define dsc                         greater<ll>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n
#define ln  						cout << endl

void solve(){
    in2(n,m);
    vector <pair<ll,ll>> v;
    fl(i,0,m){
        in2(a,b);
        ll t = a*b;
        v.pb(make_pair(b,(-1*a)));
    }
    sort(all(v));

    ll sum=0;

    for(ll i=m-1;i>=0;i--){

        // printls(v[i].first);
        // println(v[i].second*-1);

        ll fs = v[i].first;
        ll sn = v[i].second*-1;

        if(n-sn > 0){
            sum += fs*sn;
            n-=sn;
        }
        else {
            sum += n*fs;
            n=0;
        }
        if(n==0) break;
    }
    println(sum);
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