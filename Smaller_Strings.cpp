#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define pb                          push_back

#define mem(arr,val)                memset(arr, val, sizeof(arr))
#define ps(n,l)                     fixed<<setprecision(l)<<n
#define lcm(a,b)                    (a/__gcd(a,b))*b

#define fl(i,a,b)                   for(ll i=a; i<b; i++)
#define fr(i,a,b)                   for(ll i=b-1; i>=a; i--)

#define ins(s)                      string s;           cin>>s;
#define in1(a)                      ll a;              cin>>a;
#define in2(a, b)                   ll a, b;           cin >> a >> b;
#define in3(a, b, c)                ll a, b, c;        cin >> a >> b >> c;
#define in4(a, b, c, d)             ll a, b, c, d;     cin >> a >> b >> c >> d;

#define InVec(v,n)                  vector<ll> v(n); fl(i,0,n) cin>>v[i];
#define InArr(a,n)                  ll a[n]; fl(i,0,n) cin>>a[i];
#define InArrSum(a,n,sum)           ll a[n]; fl(i,0,n) {cin>>a[i]; sum += a[i];}
#define sz(s)                       s.size()

#define dsc                         greater<ll>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n
#define ln                    		 cout << endl

#define printVec(a)                 for(auto it:a) cout<<it<<" " 
#define printArr(a,n)               fl(i,0,n) printls(a[i]);                        
#define YES                         println("YES")
#define Yes                         println("Yes")
#define NO                          println("NO")
#define No                          println("No")

ll mod = 1000000007;

ll pw(ll n, ll p){
    ll ans = 1;

    while(p>0){
        if( p&1 ) 
            ans = n*ans %mod;
        n=n*n %mod;
        p>>=1;
    }
    return ans;

}

void solve(){
    in2(n,k);
    ins(s);

    ll mid = (n+1)/2;

    ll ans = 0;

    fl(i,0,mid){
        ll d = s[i]-'a';        // find the possible char at position i
        ans = (ans + d *pw(k, mid-1-i)) %mod;
    }
    
    string t;
    fl(i,0,mid){
        t.pb(s[i]);
    }
    fl(i,0,n-mid){
        t.pb(s[n-mid-1-i]);
    }
    if(t<s) ans++;
    ans %= mod;

    println(ans);
}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    ll T;
    cin >> T;
    ll z=1;
    while(T--) {
        
        cout<<"Case #"<< z++ <<": ";
        solve();

    }
    return 0;
    // return 0LL;
}