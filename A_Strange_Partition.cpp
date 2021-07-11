#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define inS(s)                      string s; cin>>s;
#define in1(a)                      int a;          cin>>a;
#define in2(a, b)                   int a, b;       cin >> a >> b;
#define in3(a, b, c)                int a, b, c;    cin >> a >> b >> c;

#define InVec(v,n)                  vector<int> v(n); fl(i,0,n) cin>>v[i];
#define InArr(a,n)                  int a[n]; fl(i,0,n) cin>>a[i];
#define len(s)                      s.length()

#define dsc                         greater<int>()
#define all(x)                      (x).begin(), (x).end()

#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n

void solve(){
    in2(n,x);
    int a[n];
    int sum=0,sum2=0; 
    fl(i,0,n) {
        cin>>a[i];
        sum+=a[i];
    }
    int min = std::min(a[0],a[n-1]);
    fl(i,0,n) {
        if(a[i]%x == 0) a[i]/=x;
        else a[i] =(a[i]/x)+1;
        // a[i] = std::ceil(a[i]/3);
        sum2 += a[i];
        // printls(a[i]);
    }
    sum -= min;

    if(sum%x != 0) {
        sum/=x;
        sum++;
    }
    else  sum/=x;
    
    if(min%x != 0) { min++;
        min/=x;
        min++;
    }
    else    min/=x;
    
    printls(sum + min);
    println(sum2);

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