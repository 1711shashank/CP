//final
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

    in3(n,m,t);
    ll sum=0;
    InArr(p,n);
    InArr(a,m);
    InArr(k,m);
    
    vector <pair<ll,ll>> v;

    fl(i,0,m){
        v.pb({k[i], (a[i]*-1)}); // -1 because when 2 assigment has same time it will take the assigment with lest time
    }

    
    

    sort(all(v));
    reverse(all(v));

    fl(i,0,m/2){
        sum += -v[i].second;
    }

    t -= sum;

    sort(p,p+n);

    ll ans=0;

    // for(; ans < n && t >= p[ans]; ++ans) t-= p[ans];

    while( ans < n && t >=p[ans]){
        t-=p[ans];
        ans++;
    }

    println(ans);


    
}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int T;
    cin >> T;
    while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}