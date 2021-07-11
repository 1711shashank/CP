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
    in1(t);
    in2(x1,y1);
    in2(x2,y2);
    inS(s);
    ll north=0, south=0, west=0, east=0;
    if(x1 >= x2) west = x1-x2;
    else east = x2-x1;

    if( y1 <= y2 ) north = y2-y1;
    else south = y1-y2;

    // printls(north);
    // printls(south);
    // printls(west);
    // println(east);

    fl(i,0,t){
        if(north <= 0 && south <= 0 && east <= 0 && west <= 0){
            println(i);
            return;
        }
        if(s[i] == 'N') north--;
        if(s[i] == 'S') south--;
        if(s[i] == 'E') east--;
        if(s[i] == 'W') west--;
    } 
    if(north <= 0 && south <= 0 && east <= 0 && west <= 0){
        println(t);
        return;
    }
    println(-1);
    

    
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