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
    in1(n);
    inS(s);
    ll x=0,X=0;
    fl(i,0,n){
        if(s[i]=='x') x++;
        else X++;
    }


    ll mx = max(X,x);
    ll mn = min(X,x);

    println(n/2 - mn);

    ll dif = n/2 - mn;
    

    if(mx == X){
        fl(i,0,n){
            if(dif == 0) break;
            if(s[i] == 'X'){
                s[i]='x';
                dif--;
            }
             
            
        }
        println(s);
    }
    
    else {
      
        fl(i,0,n){
            if(dif == 0) break;
            
            if(s[i] == 'x'){
                s[i]='X';
                dif--;
            }
            
           
        }
        println(s);
    }


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