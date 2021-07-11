#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define pb                          push_back
#define ff                          first
#define ss                          second

#define mem(arr,val)                memset(arr, val, sizeof(arr))
#define ps(n,l)                     fixed<<setprecision(l)<<n
#define lcm(a,b)                    (a/__gcd(a,b))*b

#define fl(i,a,b)                   for(ll i=a; i<b; i++)
#define fr(i,a,b)                   for(ll i=b-1; i>=a; i--)

#define ins(s)                      string s;          cin>>s;
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
#define ln                          cout << endl


#define printArrVec(a)              for(auto it:a) cout<<it<<" "
#define p1(a);                      cout<<a<<endl;    			                                   
#define p2(a,b);                    cout<<a<<" "<<b<<endl;                                      
#define p3(a,b,c);                  cout<<a<<" "<<b<<" "<<c<<endl; 
#define YES                         println("YES")
#define Yes                         println("Yes")
#define NO                          println("NO")
#define No                          println("No")

#define mod 1000000007


// after tutorial
void solve(){
    in1(n);
    
    

    vector<ll> o;
    vector<ll> e;
    


    fl(i,1,2*n+1){
        in1(x);
        if(x&1) o.pb(i);
        else    e.pb(i);
    }

    vector<pair<ll,ll>> v;

    for(int i = 0; i + 1 < o.size(); i += 2)
		v.push_back({o[i], o[i + 1]});
	for(int i = 0; i + 1 < e.size(); i += 2)
	    v.push_back({e[i], e[i + 1]});
	for(int i = 0; i < n - 1; i++)
		cout << v[i].ff << " " << v[i].ss << endl;
	
    
}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    in1(T);  while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}