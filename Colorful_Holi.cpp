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
    in3(x,y,k);

    ll t;
    set<int> st;
    set<int> st1;

    ll a[n+1]; 
    memset(a, 0, sizeof(a));
    fl(i,1,n+1) {
        cin >> t;
        st.insert(t);
        if( x <= t && t <= y){
            st1.insert(t);
        }
    }
    
    ll col = y-x+1 - st1.size();
     
    ll opt = min(col,k);

    ll space = n-st.size();

    println(st.size() + min(space,opt));


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