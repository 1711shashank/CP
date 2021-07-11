#include <bits/stdc++.h>
using namespace std;
#define ll                          long long int
#define pb                          push_back

#define mem(arr,val)                memset(arr, val, sizeof(arr))
#define ps(n,l)                     fixed<<setprecision(l)<<n
#define lcm(a,b)                    (a/__gcd(a,b))*b

#define fl(i,a,b)                   for(int i=a; i<b; i++)
#define fr(i,a,b)                   for(int i=b-1; i>=a; i--)

#define ins(s)                      string s;           cin>>s;
#define in1(a)                      int a;              cin>>a;
#define in2(a, b)                   int a, b;           cin >> a >> b;
#define in3(a, b, c)                int a, b, c;        cin >> a >> b >> c;
#define in4(a, b, c, d)             int a, b, c, d;     cin >> a >> b >> c >> d;

#define InVec(v,n)                  vector<int> v(n); fl(i,0,n) cin>>v[i];
#define InArr(a,n)                  int a[n]; fl(i,0,n) cin>>a[i];
#define InArrSum(a,n,sum)           int a[n]; fl(i,0,n) {cin>>a[i]; sum += a[i];}
#define sz(s)                       s.size()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n

#define printVec(a)                 for(auto it:a) cout<<it<<" " 
#define printArr(a,n)               fl(i,0,n) printls(a[i]);                        
#define YES                         println("YES");
#define Yes                         println("Yes");
#define NO                          println("NO"); 
#define No                          println("No")   


//after tutorial
void solve(){
    in1(n);
    ll ans=0;
    ll k = 8;
    fl(i,1,n/2+1){
        ans += i*k;
        k+=8;
    }
    println(ans);
}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int T;
    cin >> T;
    while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}