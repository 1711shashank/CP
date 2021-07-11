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


void solve(){
    in2(n,m);
    vector<ll> v(1010,0);

    ll mn = INT_MAX;
    ll mx = INT_MIN;

    while(n--){
        in2(a,b);
        if(a>b)swap(a,b);

        mn = min(a,mn);
        mx = max(b,mx);
        fl(i,a,b+1){
            v[i]++;
        }
    }
    // printArrVec(v);ln;

    while(m--){
        in1(x);
        if(v[x] > 0) {
            printls(x); 
            v[x]--;
            continue;
        }
        ll k = 0;
        while(1){
            k++;
            
            if((x-k >=mn) && v[x-k] > 0 ) {
                printls(x-k);
                v[x-k]--;
                break;
            }
            else if( (x+k <= mx) && v[x+k] > 0) {
                printls(x+k);
                v[x+k]--;
                break;
            }
        }
    }
    ln;

    
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