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


ll w[102];
ll v[100005];
ll dp[102][100005];


// memoization
// ll sol(ll w[],ll v[], ll n, ll W){

   

//     if( dp[n][W] != -1){
//         return dp[n][W];
//     }


//     ll mx;
//     if(W >= w[n-1])
//         mx = max( (v[n-1] + sol(w,v,n-1,W-w[n-1])), sol(w,v,n-1,W));
//     else 
//         mx = sol(w,v,n-1,W);


//     dp[n][W] = mx;
//     return mx;
// }



// top down approch
void solve(){
    in2(n,W);

    fl(i,0,n){
        cin >> w[i] >> v[i];
    }

    fl(i,0,n+1){
        fl(j,0,W+1){
            if(i == 0 || j == 0){ dp[i][j]=0; continue;}

            if(j >= w[i-1] ){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i-1]] + v[i-1]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }


    // fl(i,0,n+1){
    //     fl(j,0,W+1){
    //         pls(dp[i][j]);
    //     }ln;
    // }

    p1(dp[n][W]);


}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    //in1(T);  while(T--)  
        solve();
        
    return 0;
    // return 0LL;
}