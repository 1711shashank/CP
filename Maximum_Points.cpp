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

ll knapSack(ll W, vector<ll> wt, vector<ll> val, ll n)
{

    if (n == 0 || W == 0)
        return 0;
 
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
 
    else
        return max( val[n - 1]  + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
}
 
void solve(){

    in3(a,b,c); // time
    in3(x,y,z); // point

    vector<ll> w;
    vector<ll> v;

    ll W = 240;

    fl(i,0,20){
        w.pb(a);
        w.pb(b);
        w.pb(c);

        v.pb(x);
        v.pb(y);
        v.pb(z);
    }


    ll n = 60, k = 240;

    
    // n = item , k = W;
    ll dp[n+1][k+1];
    fl(i,0,n+1){
        fl(j,0,k+1){
            dp[i][j]=0;
        }
    }


    fl(i,1,n+1){
        fl(j,1,k+1){

            if(j >= w[i-1]){
                 ll p = j - w[i-1];
                ll mx = v[i-1] + dp[i-1][max(p,0LL)];
                dp[i][j] = max( dp[i-1][j], mx );

            }
            else{
                dp[i][j] = dp[i-1][j];
            }
            
           

            
        }
    }

    p1(dp[n][k]);










    // double m1 = x*1.0/a;
    // double m2 = y*1.0/b;
    // double m3 = z*1.0/c;


    // double mx1 = max({m1,m2,m3});
    // double mx3 = min({m1,m2,m3});
    // double mx2 = m1+m2+m3 -mx1 -mx3;

    // ll time = 240;
    // ll ans=0;
    // fl(i,0,20){
    //     if(mx1 == m1){
    //         if(time - a > 0){
    //             time -=a;
    //             ans+=x;
    //         }
    //         else break;
    //     }
    //     else if(mx1 == m2){
    //         if(time - b > 0){
    //             time -=b;
    //             ans+=y;
    //         }
    //         else break;

    //     }
    //     else if(mx1 == m3){
    //         if(time - c > 0){
    //             time -=c;
    //             ans+=z;
    //         }
    //         else break;

    //     }
    // }

    // p2(time,ans);

    // fl(i,0,20){
    //     if(mx2 == m1){
    //         if(time - a > 0){
    //             time -=a;
    //             ans+=x;
    //         }
    //         else break;

    //     }
    //     else if(mx2 == m2){
    //         if(time - b > 0){
    //             time -=b;
    //             ans+=y;
    //         }
    //         else break;

    //     }
    //     else if(mx2 == m3){
    //         if(time - c > 0){
    //             time -=c;
    //             ans+=z;
    //         }
    //         else break;

    //     }
    // }

    // p2(time,ans);


    // fl(i,0,20){
    //     if(mx3 == m1){
    //         if(time - a > 0){
    //             time -=a;
    //             ans+=x;
    //         }
    //         else break;

    //     }
    //     else if(mx3 == m2){
    //         if(time - b > 0){
    //             time -=b;
    //             ans+=y;
    //         }
    //         else break;

    //     }
    //     else if(mx3 == m3){
    //         if(time - c > 0){
    //             time -=c;
    //             ans+=z;
    //         }
    //         else break;

    //     }
    // }

    // p2(time,ans);
    
    // ln;




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