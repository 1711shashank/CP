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

void solve(){
    in1(n);
    n+=2;

    ll a[n];
    ll sum=0;

    fl(i,0,n){
        cin>>a[i];
        sum+=a[i];
    }

    sort(a,a+n);

    
    //last
    fl(i,0,n-1){
        if(sum - a[n-1] - a[i] == a[n-1]){
            fl(j,0,n-1){
                if(i!=j){
                    printls(a[j]);
                }
            }
            cout<<endl;
            return;
        }

    }
    //2nd last
    if(sum - a[n-1] - a[n-2] == a[n-2]){
        fl(j,0,n-2){
            printls(a[j]);
        }
        cout<<endl;
        return;
    }

    println(-1);


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