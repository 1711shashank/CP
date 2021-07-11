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

void solve(){
    in1(n);
    in3(c0,c1,h);
    inS(s);
    ll t0=0,t1=0;

    ll mn=INT_MAX;

    fl(i,0,n){
        if(s[i]=='0') t0++;
        else t1++;
    }
    mn = min(mn, (t0*c0) + (t1*c1));
    int temp;
    ll ans=mn;
    if(c0+h < c1){
        temp = t1*h;
        t0 += t1;
        ans = temp + c0*t0;
    }
    if(c1+h < c0){
        temp = t0*h;
        t1 += t0;
        ans = temp + c1*t1;
    }
    ans = min(mn,ans);
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