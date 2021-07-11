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

void solve(){
    in2(n,k);
    int temp = n;
    int a[n];
    memset(a, 0, sizeof(a));

    if((n-1)/2 < k ){
        println(-1);
        return;
    }

    else{
        
        for(int i=1;i<n;i+=2){
            if(k==0) {
                break;
            }
            a[i]=temp;
            temp--;
            k--;
        }

        for(int i=0;i<n;i++){
            if(a[i]==0){
                a[i]=temp;
                temp--;
            }
        }
    }

    for(int i=0;i<n;i++){
        printls(a[i]);
    }
    cout<<endl;



    
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