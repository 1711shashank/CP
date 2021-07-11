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

int sumOfDigit(ll n){
    int sum=0;
    while(n>0){
        sum+= n%10;
        n/=10;
    }
    return sum;
}
bool unique(ll n){
    string s = to_string(n);
    set<int> st;
    while(n>0){
        st.insert(n%10);
        n/=10;
    }
    if(s.length() == st.size()) return true;
    else return false;
}

void solve(){
    in1(n);
    string s="";
    for(int i=9;i>0;i--){
        if(n>=i){
            n-=i;
            char ch = (char)i + 48; //ascii code of 0
            s = ch + s;
        }
    }
    if(n>0) println(-1);
    else println(s);
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