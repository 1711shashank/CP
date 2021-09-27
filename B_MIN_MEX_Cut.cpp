#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define pb                          push_back
#define ff                          first
#define ss                          second

#define mem(arr,val)                memset(arr, val, sizeof(arr))
#define pd(n,l)                     cout<<setprecision(l)<<n
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
#define YES                         pln("YES")
#define Yes                         pln("Yes")
#define NO                          pln("NO")
#define No                          pln("No")

#define mod 1000000007

// look for time complexity  
void solve(){
    ins(s);
    ll n = sz(s);

    string s1(n,'1');
    if( s == s1){ p1(0); return;}
    string s2(n,'0');
    if( s == s1){ p1(1); return;}

    s1 = s;     sort(all(s1));
    s2 = s1;    reverse(all(s1));
    if( s1 == s || s2 == s) {p1(1); return;}

    if(n > 2){
        if(s[0] == '1' && s[n-1] == '1'){
            ll c=0;
            fl(i,1,n){
                if(s[i] != s[i-1]){
                    c++;
                    // pls(i);
                }
            }
            // pls(c);
            if(c==2){
                p1(1);
                return;
            }
        
        }   
       
    }
    p1(2);
        


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