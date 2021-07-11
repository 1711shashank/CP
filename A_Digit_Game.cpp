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
    in1(l);
    string s;
    cin>>s;

    if(l==1) {
        if((s[0] - '0') % 2 != 0){ println(1); return;}
        else {println(2); return;}
    }
    s='0'+s; //now length is l+1;

    if(l%2==0){
        fl(i,1,l+1){
            
            if(i%2 == 0 && (s[i]-'0')%2 == 0){
                
                println(2);
                return;
            }
        }
        println(1);
        return;

    }
    else {
        fl(i,1,l+1){
            if(i%2 != 0 && (s[i]-'0')%2 != 0){
                println(1);
                return;
            }
        }
        println(2);
        return;

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