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

#define InVec(v,n)                  vector<ll> v(n); fl(i,0,n) {cin>>v[i];}
#define InArr(a,n)                  ll a[n]; fl(i,0,n) {cin>>a[i];}
#define InArrSum(a,n,sum)           ll a[n]; fl(i,0,n) {cin>>a[i]; sum += a[i];}
#define InVecSum(v,n,sum)           vector<ll> v(n); fl(i,0,n) {cin>>v[i]; sum += v[i];}

#define sz(s)                       s.size()

#define dsc                         greater<ll>()
#define all(x)                      (x).begin(), (x).end()

#define pln(n)                      cout << n << "\n"   
#define pls(n)                      cout << n << " "   
#define pt(n)                       cout << n
#define ln                          cout << "\n"   

#define pmap(mp)                    for(auto i: mp) {p2(i.ff,i.ss);}
#define printArrVec(a)              for(auto it:a)  {cout<<it<<" ";} ln;
#define p1(a);                      cout<< a << "\n";   
#define p2(a,b);                    cout<< a <<" "<< b << "\n";      
#define p3(a,b,c);                  cout<< a <<" "<< b <<" "<< c << "\n";
#define YES                         println("YES")
#define Yes                         println("Yes")
#define NO                          println("NO")
#define No                          println("No")

#define mod 1000000007

// void solve(){
//     in1(n);
//     vector<ll> od;
//     vector<ll> en;

//     fl(i,0,n){
//         in1(x);
//         if(x&1) od.pb(x);
//         else en.pb(x);
//     }
//     sort(all(od),dsc);
//     sort(all(en),dsc);
//     ll mn = min(sz(od),sz(en));
//     ll sumOdd=0,sumEvn=0;
//     fl(i,0,mn){
//         sumOdd += od[i];
//         sumEvn += en[i];
//     }

//     if(sz(od)!=sz(en)){
//         if(max(sz(od),sz(en)) == sz(en)){
//             fl(i,mn,n){
//                 sumEvn += en[i];
//                 i++;
//                 // if(i==n) break;
//             }
//         }
//         else{
//             fl(i,mn,n){
//                 i++;
//                 if(i==n) break;
//                 sumOdd+=od[i];
//             }
//         }
//     }

//     if(sumEvn == sumOdd) {p1("Tie");}
//     else if(sumEvn > sumOdd) {p1("Alice");}
//     else {p1("Bob");}
// }

void solve(){
    in1(n);
    InArr(a,n);
    sort(a,a+n,dsc);

    ll so=0,se=0;
    fl(i,0,n){
        if(i&1){
            if(a[i]&1) so += a[i];
        }
        else {
            if(!(a[i]&1)) se += a[i];
        }
    }
    if(se == so) {p1("Tie");}
    else if(se > so) {p1("Alice");}
    else {p1("Bob");}

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