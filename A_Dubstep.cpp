#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define inS(a)                      string s; cin>>s;
#define in1(a)                      int a;          cin>>a;
#define in2(a, b)                   int a, b;       cin >> a >> b;
#define in3(a, b, c)                int a, b, c;    cin >> a >> b >> c;

#define VecInput(v,n)               vector<int> v(n); fl(i,0,n) cin>>v[i];
#define ArrInput(a,n)               int a[n]; fl(i,0,n) cin>>a[i];
#define StrInput(s)                 string(s); cin >> (s);
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n

void solve(){
    StrInput(s);

    int l = len(s);

    while(s[0]=='W' && s[1]=='U' && s[2] == 'B' && l>4){
        s = s.substr(3);
    }
    l = len(s);
    while(s[l-3]=='W' && s[l-2]=='U' && s[l-1] == 'B'  && l>4){
        s = s.substr(0,l-3);
    }

    //removed the starting and ending WUB



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