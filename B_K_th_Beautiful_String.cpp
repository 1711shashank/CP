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
#define pls(n)                      cout << n << "\n"   
#define pt(n)                       cout << n
#define ln                          cout << "\n"   

#define pmap                        for(auto i: mp) p2(i.ff,i.ss);
#define printArrVec(a)              for(auto it:a) cout<<it<<" "   ln;
#define p1(a);                      cout<< a << "\n";  			                                   
#define p2(a,b);                    cout<< a <<" "<< b << "\n";                                      
#define p3(a,b,c);                  cout<< a <<" "<< b <<" "<< c << "\n";
#define YES                         println("YES")
#define Yes                         println("Yes")
#define NO                          println("NO")
#define No                          println("No")

vector<ll> v;

// by my own
// void solve(){
//     in2(n,k);
//     if(k==1){
//         string ans(n-2,'a');
//         print(ans);
//         p1("bb");
//         return;  
//     }
    
//     string ans(n,'a');

//     ll lb = lower_bound(all(v),k)-v.begin();    lb++;

//     ll z = k - v[lb-2];

//     ans[n-z]='b';
//     ans[n-lb-1] = 'b';

//     // p2(n-z,n-lb-1);

//     p1(ans);
// }

// A_T_
void solve(){
    in2(n,k);
    string s(n,'a');

    for(ll i = n - 2; i >= 0; i--) {
        // printls(k);
        if(k<=n-i-1){
            s[i]='b';
            s[n-k]='b';
            p1(s);
            return;
        }
        k-=n-i-1;
    }
    p1(s);
}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    // fl(i,2,99999){
    //     v.pb(i*(i-1)/2);
    // }
    // printArrVec(v);ln;
    

    in1(T);  while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}