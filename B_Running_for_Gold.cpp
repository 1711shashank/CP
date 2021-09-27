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
#define YES                         println("YES")
#define Yes                         println("Yes")
#define NO                          println("NO")
#define No                          println("No")

#define mod 1000000007
 
 
ll a[50005][5];

ll better(ll i, ll j){
    ll c=0;

    fl(k,0,5){
        if(a[i][k] < a[j][k]) c++;
    }
    return (c >=3); // 1-> true & 0->false
}

//A_T_
void solve(){
    ll n;
    cin>>n;

    //input
    fl(i,0,n){
        fl(j,0,5){
            cin>>a[i][j];
        }
    }

    ll best = 0;                // assume that 0 is best
    fl(i,0,n){
        if(better(i,best)){         // compair 0 with all there
            best = i;               // if someone else is better the zero then update best
        }
    }


    fl(i,0,n){
        if(i==best) continue;
        if( better(best,i) == 0) {
            p1(-1); 
            return;
        }
    }


    p1(best+1);
    


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