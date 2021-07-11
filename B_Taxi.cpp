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
    ll a[n]; 
    ll n1=0,n2=0,n3=0,n4=0;
    fl(i,0,n) {
        cin>>a[i];
        if(a[i]==1) n1++;
        if(a[i]==2) n2++;
        if(a[i]==3) n3++;
        if(a[i]==4) n4++;
    }
    ll ans=n4;
    if(n3 >= n1) n1=0;
    else n1=n1-n3;
    if(n2%2==0) n2/=2;
    else{
        
        n2 = (n2+1)/2;
        if(n1 == 1) n1--;
        if(n1 >= 2) n1-=2;
    }

    if(n1 < 4 && n1>0) n1=1;
    else if(n1 % 4 ==0) n1 = n1/4;
    else { n1 /= 4; n1++; }
    
    ans += n3+n2+n1;
    println(ans);



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