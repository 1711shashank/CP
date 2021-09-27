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

#define pln(n)                      cout << n << "\n"   
#define pls(n)                      cout << n << " "   
#define pt(n)                       cout << n
#define ln                          cout << "\n"   

#define pmap                        for(auto i: mp) p2(i.ff,i.ss);
#define printArrVec(a)              for(auto it:a) cout<<it<<" "   ln;
#define p1(a);                      cout<< a << "\n";  			                                   
#define p2(a,b);                    cout<< a <<" "<< b << "\n";                                      
#define p3(a,b,c);                  cout<< a <<" "<< b <<" "<< c << "\n";
#define p4(a,b,c,d);                  cout<< a <<" "<< b <<" "<< c <<" "<< d << "\n";
#define YES                         println("YES")
#define Yes                         println("Yes")
#define NO                          println("NO")
#define No                          println("No")

#define mod 1000000007

void solve(){
    in2(a,b);
    if(a==b){
        p1(0);
        return;
    }
    
    ll l = min(a,b);
    ll r = max(a,b);
    ll m = l+(r-l)/2,ans=INT_MIN;
    while(l<=r){
        m = (l+r)/2;
        // p4(l,m,r,ans);
        // pls( ceil(b-m)*1.0/2);
        // pln( ceil(m-a)*1.0/2);


        ll k = ( ((b-m+1)/2) + ( (m-a+1)/2) );
        

        if( k > ans){
            ans = max(k,ans);
            r = m-1;
        }
        else {
            l = m+1;

        }
    }
    if(a>b) ans--;
    p1(ans);
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