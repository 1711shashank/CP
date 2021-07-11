#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define inS(a)                      string s; cin>>s;
#define in1(a)                      int a;          cin>>a;
#define in2(a, b)                   int a, b;       cin >> a >> b;
#define in3(a, b, c)                int a, b, c;    cin >> a >> b >> c;

#define InVec(v,n)               vector<int> v(n); fl(i,0,n) cin>>v[i];
#define InArr(a,n)               int a[n]; fl(i,0,n) cin>>a[i];
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n

void solve(){
    in1(n);
    ll temp;
    ll ans=0;
    ll cn=0,cz=0;
    fl(i,0,n){
        cin >> temp;
        if(temp < 0) {
            cn++;
            temp *=-1;
        }

        if(temp == 0){
            ans++;
            cz++;
        }
        else if(temp == 1) continue;
        else{
            ans+=temp -1;
        } 
    }
    if(cn%2 == 1 && cz == 0)    ans+=2;
    println(ans);

}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    // int T=1;
	// cin >> T;
	// while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}