#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(ll i=a;i<b;i++)

#define inS(a)                      string a; cin>>a;
#define in1(a)                      int a;          cin>>a;
#define in2(a, b)                   int a, b;       cin >> a >> b;
#define in3(a, b, c)                int a, b, c;    cin >> a >> b >> c;

#define InVec(v,n)                  vector<int> v(n); fl(i,0,n) cin>>v[i];
#define InArr(a,n)                  int a[n]; fl(i,0,n) cin>>a[i];
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n


//after tutorial
void solve(){
    string a; cin>>a;
    string b; cin>>b;
    ll n=a.length();
    ll m=b.length();
    // println(a);


        ll ans =0;
        for(ll len = 1; len <= min(n, m); len++) {
            for(ll i=0; i+len <=n;i++){
                for(ll j=0; j+len <= m;j++){
                    if(a.substr(i,len)== b.substr(j,len))
                            ans = max(len,ans);
                }
            }
        }
        println((n+m-ans*2));
    
        

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