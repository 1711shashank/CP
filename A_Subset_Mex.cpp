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
    in1(n);
    
    set<int> s1;
    set<int> s2;
    int temp;

    fl(i,0,n){
        cin>>temp;
        if(!s1.count(temp)){
            s1.insert(temp);
        }
        else {
            s2.insert(temp);
        }
 
    }
    int k1=0;
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        if( k1 != *it){break;}
        k1++;
    }
    int k2=0;
    for (auto it = s2.begin(); it != s2.end(); it++)
    {
        if( k2 != *it){break;}
        k2++;
    }
    println(k1+k2);

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