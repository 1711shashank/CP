#include <bits/stdc++.h>
using namespace std;
#define ll                          unsigned long long int 
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

#define printVec(a)                 for(auto it:a) printls(it);
#define printArr(a,n)               fl(i,0,n) printls(a[i]);                        
#define YES                         println("YES")
#define Yes                         println("Yes")
#define NO                          println("NO")
#define No                          println("No")



void solve(){
    in3(a1,b1,c1);
    in2(a2,c2);
    in3(a3,b3,c3);

    ll ans = 0;

    if(a1-b1 == b1-c1) ans++; //printls(ans);
    if(a3-b3 == b3-c3) ans++; //printls(ans);
    if(a1-a2 == a2-a3) ans++; //printls(ans);
    if(c1-c2 == c2-c3) ans++; //printls(ans);


    map<ll,ll> mp;

    if((b1+b3)%2==0){
        mp[(b1+b3)/2]++;
    }
    if((a2+c2)%2==0) {
        mp[(a2+c2)/2]++;
    }

    if((a1+c3)%2==0){
        mp[(a1+c3)/2]++;
    }

    if((a3+c1)%2==0) {
        mp[(a3+c1)/2]++;
    }

    ll mx = 0;

    
    for(auto it: mp){
        mx = max(mx,it.second);
    }

    
    println(ans+mx);

    
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