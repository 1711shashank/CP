#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define pb                          push_back


#define fl(i,a,b)                   for(ll i=a;i<b;i++)

#define inS(s)                      string s; cin>>s;
#define in1(a)                      ll a;          cin>>a;
#define in2(a, b)                   ll a, b;       cin >> a >> b;
#define in3(a, b, c)                ll a, b, c;    cin >> a >> b >> c;

#define InVec(v,n)               	vector<ll> v(n); fl(i,0,n) cin>>v[i];
#define InArr(a,n)               	ll a[n]; fl(i,0,n) cin>>a[i];
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n
#define ln  						cout << endl

void solve(){
    inS(s);
    in1(n);
    string a[n]; 
    int z=0;
    fl(i,0,n) {
        cin>>a[i];
        if(s==a[i]) z=1;
    }
    if(z==1){
        println("YES");
        return;
    }
    fl(i,0,n){
        fl(j,i,n){
            if(a[i][1] == s[0] && a[j][0] == s[1]){
                println("YES");
                return;
            }
        }
    }
    for(ll i=n-1;i>=0;i--){
        for(ll j=i;j>=0;j--){
            if(a[i][1] == s[0] && a[j][0] == s[1]){
                println("YES");
                return;
            }
        }
    }
    println("NO");
}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    // int T;
    // cin >> T;
    // while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}