#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define pb                          push_back
#define ff                          first
#define ss                          second

#define mem(arr,val)                memset(arr, val, sizeof(arr))
#define ps(n,l)                     fixed<<setprecision(l)<<n
#define lcm(a,b)                    (a/__gcd(a,b))*b

#define fl(i,a,b)                   for(ll i=a; i<b; i++)
#define fr(i,a,b)                   for(ll i=b-1; i>=a; i--)

#define ins(s)                      string s;          cin>>s;
#define in1(a)                      ll a;              cin>>a;
#define in2(a, b)                   ll a, b;           cin >> a >> b;
#define in3(a, b, c)                ll a, b, c;        cin >> a >> b >> c;
#define in4(a, b, c, d)             ll a, b, c, d;     cin >> a >> b >> c >> d;

#define InVec(v,n)                  vector<ll> v(n); fl(i,0,n) {cin>>v[i];}
#define InArr(a,n)                  ll a[n]; fl(i,0,n) {cin>>a[i];}
#define InArrSum(a,n,sum)           ll a[n]; fl(i,0,n) {cin>>a[i]; sum += a[i];}
#define InVecSum(v,n,sum)           vector<ll> v(n); fl(i,0,n) {cin>>v[i]; sum += v[i];}

#define sz(s)                       s.size()

#define dsc                         greater<ll>()
#define all(x)                      (x).begin(), (x).end()

#define pln(n)                      cout << n << "\n"   
#define pls(n)                      cout << n << " "   
#define pt(n)                       cout << n
#define ln                          cout << "\n"   

#define pmap(mp)                    for(auto i: mp) {p2(i.ff,i.ss);}
#define printArrVec(a)              for(auto it:a)  {cout<<it<<" ";} ln;
#define p1(a);                      cout<< a << "\n";   
#define p2(a,b);                    cout<< a <<" "<< b << "\n";      
#define p3(a,b,c);                  cout<< a <<" "<< b <<" "<< c << "\n";
#define YES                         pln("YES")
#define Yes                         pln("Yes")
#define NO                          pln("NO")
#define No                          pln("No")

#define mod 1000000007

// look for time complexity  
void solve(){
    in1(n);
    InArr(a,n);

    vector<ll> v(n+1);
    fl(i,1,n+1){
        v[i]=i;
    }
    fl(i,1,n+1){
        if(a[i-1] < v[i]){
            p1(-1);
            return;
        }
        else{
            swap(v[i],v[a[i-1]]);
        }
    }

    fl(i,1,n+1){
        pls(v[i]);
    }
    ln;

    // set<ll> st;
    // fl(i,0,n){
    //     st.insert(i+1);
    // }

    // vector<ll> v;
    // vector<ll> v1(n);

    // fl(i,0,n){
    //     if(st.find(a[i]) != st.end()){
    //         // pls(a[i]);
    //         v.pb(a[i]);
    //         st.erase(a[i]);
    //     }
    //     else{
    //         for(auto i :st){
    //             // pls(i);
    //             v.pb(i);
    //             st.erase(i);
    //             break;
    //         }
    //     }
    // }
    


    // ll mx = v[0];
    // fl(i,0,n){
    //     v1[i] = max(mx,v[i]);
    //     mx = max(mx,v[i]);
    // }

    // // printArrVec(v1);


    // fl(i,0,n){
    //     if(a[i] != v1[i]) {p1(-1); return;}
    // }

    // printArrVec(v);


    
  

}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    in1(T);  while(T--)  
        solve();
        
    return 0;
    // return 0LL;
}