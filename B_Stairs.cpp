#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define inS(s)                      string s; cin>>s;
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
    ll x;
    cin>>x;

    if(x==1) {println(1); return;}
    ll n=0;

    vector<ll> v;
    int z=0;
    v.push_back(0);
    ll temp;

    while(true){
        n++;
        z++;
        if(n%2==1){

        
            temp = (n*(n+1))/2;
            v.push_back(v.back() + temp);

            if(v.back() >= x) {
                v.pop_back();
                println(v.size()-1);
                break;
            } 
        }
    }
    // for (auto ir = v.begin(); ir != v.end(); ++ir)
    //             cout << *ir << " "; cout<<endl;
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