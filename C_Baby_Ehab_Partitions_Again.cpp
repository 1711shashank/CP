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
    InArr(b,n);
    
    int a[n];

    fl(i,0,n){
        a[i]=b[i];
    }

    sort(a,a+n);

    if(n==1){
        println(0);
        return;
    }

    ll Sum1 =0;
    ll Sum2 =0;

    ll st=0,end=n-1;

    int z=0;
    
    while(st < end){
        if(z==0){
            z=1;
            Sum1 += a[st]+a[end];
        }
        else{
            z=0;
            Sum2 += a[st]+a[end];
        }   
        st++;
        end--;     
    }


    if(n%2 == 1 ) {
        if(Sum1 > Sum2) Sum2+=a[st-1];
        else Sum1+=a[st-1];
    }

    // printls(Sum1);
    // println(Sum2);

    if(Sum1 != Sum2){
        println(0);
        return;
    }
    ll ind;

    fl(i,0,n){
        if(b[i] == a[0]) {
            ind = i;
            break;
        }
    }
    if(Sum2-b[ind] == Sum1 || Sum1-b[ind] == Sum2){
        println(2);
        printls(ind+1);
        fl(i,0,n){
        if(b[i] == a[n-1]) {
            ind = i;
            break;
        }
        printls(ind+1);
        }

    }
    else {
        println(1);
        printls(ind+1);
    }



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