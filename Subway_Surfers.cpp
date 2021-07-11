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
        
        in3(r,n,ti);
        
        vector<long int>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int a=0;
        long int time=ti;
        for(int i=0;i<n;i++){
            if(time==0){
                break;
            }else if(time>=2){
                time-=2;
                a+=s[i];
            }else if(time==1){
                a+=ceil(s[i]/2);
                time-=1;
            }
        }
        if(a>r){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
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