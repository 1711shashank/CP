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


//after tutorial
void solve(){
    in1(n);
    inS(s);

    ll t=0,m=0;

    stack <char> T;
    
    fl(i,0,n){
        
        if(s[i] == 'T'){
            t++;
            T.push('T');
        }
        else {
            m++;
            if(T.size() == 0) {
                println("NO");
                return;
            }
            T.pop();
        }
    }

    while(!T.empty())
        T.pop();

    if(t != m*2){
        println("NO");
        return;
    }
    for(ll i = n-1; i>=0; i--){
        if(s[i] == 'T'){
            T.push('T');
        }
        else {
            if(T.size() == 0) {
                println("NO");
                return;
            }
            T.pop();
        }
    }
    println("YES");
 
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