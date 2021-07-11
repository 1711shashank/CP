#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define inS(a)                      string s; cin>>s;
#define in1(a)                      int a;          cin>>a;
#define in2(a, b)                   int a, b;       cin >> a >> b;
#define in3(a, b, c)                int a, b, c;    cin >> a >> b >> c;
#define in4(a, b, c, d)             int a, b, c, d;    cin >> a >> b >> c >> d;

#define VecInput(v,n)               vector<int> v(n); fl(i,0,n) cin>>v[i];
#define ArrInput(a,n)               int arr[n]; fl(i,0,n) cin>>a[i];
#define StrInput(s)                 string(s); cin >> (s);
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n

void solve(){
    in4(x1,y1,x2,y2);
    int Xdiff = abs(x1-x2);
    int Ydiff = abs(y1-y2);
    int ans = 0;
    if(Xdiff != 0 && Ydiff != 0){
        ans+=2;
    }
    ans+= Xdiff + Ydiff;
    println(ans);
    

}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    int T=1;
	cin >> T;
	while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}