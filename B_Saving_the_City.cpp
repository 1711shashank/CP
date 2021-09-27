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
    in2(a,b);
    ins(s);

    ll n = sz(s);
    
    ll f=-1,l=-1;
    fl(i,0,n){
        if(s[i]=='1') {
            f = i;
            break;
        }
    }
    fr(i,0,n){
        if(s[i]=='1') {
            l = i;
            break;
        }
    }


    if(f == -1 || l == -1){
        p1(0);
        return;
    }
    if( f == l){
        p1(a);
        return;
    }



    ll dp[n+1];
    mem(dp,0);
    ll c=0;

    // printArrVec(dp);




    fl(i,f,l+1){
        
        if(s[i] == '1'){
            if(s[i-1] == '1'){
                dp[i+1] = dp[i];
                continue;
            } 

            if ( c==0 ) dp[i+1] = dp[i]+a;
            else {
                dp[i+1] = dp[i] + min(a,b*c);
            }
            
            c=0;
        }
        else {
            dp[i+1]=dp[i];
            c++;
        }
    }

    // printArrVec(dp);

    p1(dp[l+1]);
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