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
    inS(s1);
    inS(s2);
    inS(s3);

    if((s1=="paper" && s2=="rock" && s3=="rock") || (s2=="paper" && s1=="rock" && s3=="rock")||(s3=="paper" && s2=="rock" && s1=="rock")){
        if(s1=="paper") {println('F'); return;}
        if(s2=="paper") {println('M'); return;}
        if(s3=="paper") {println('S'); return;}
    }
    else if((s1=="scissors" && s2=="paper" && s3=="paper") || (s2=="scissors" && s1=="paper" && s3=="paper")||(s3=="scissors" && s2=="paper" && s1=="paper")){
        if(s1=="scissors") {println('F'); return;}
        if(s2=="scissors") {println('M'); return;}
        if(s3=="scissors") {println('S'); return;}
    }
    else if((s1=="rock" && s2=="scissors" && s3=="scissors") || (s2=="rock" && s1=="scissors" && s3=="scissors")||(s3=="rock" && s2=="scissors" && s1=="scissors")){
        if(s1=="rock") {println('F'); return;}
        if(s2=="rock") {println('M'); return;}
        if(s3=="rock") {println('S'); return;}
    }
    println('?');
    
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