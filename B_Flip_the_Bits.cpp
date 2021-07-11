#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define pb                          push_back


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
string flip(string str,ll l){
    string s;
    for(ll i=0;i<l;i++){
        if(str[i] == '1'){
            s = s+'0';
        }
        else s = s+'1';
    }
    for(ll i=l;i<len(str);i++){
        s = s + str[i];
    }
    return s;    
 
}
void solve(){
    ll n,zero=0,one=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int z=0;
 
    bool arr[n];
    fl(i,0,n){
        if(a[i] == '1') one++;
        else zero++;
 
        if(one == zero){
            arr[i]=true;
        }
        else arr[i]=false;
    }
    z=1;
    for(ll i=n-1;i>=0;i--){
        if(z==1){
            if(a[i]!=b[i] ){
                if(!arr[i]){
                    println("NO");
                    return;
                }
            
                else{
                    z=0;
                }
            }

        }
        else{
            if(a[i]==b[i] ){
                if(!arr[i]){
                    println("NO");
                    return;
                }
            
                else{
                    z=1;
                }
            }
        }
        
    }
    println("YES");
 
 
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