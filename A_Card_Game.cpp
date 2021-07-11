#include <bits/stdc++.h>
using namespace std;
#define ll                         long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

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
    int n,k1,k2;
    cin >>n>>k1>>k2;
    int a[k1];
    int b[k2];
    fl(i,0,k1){
        cin>>a[i];
        if(a[i]==n) println("YES");    
    }
    fl(i,0,k2){
        cin>>b[i];
        if(b[i]==n) println("NO"); 
    }



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

}