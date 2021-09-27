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
#define YES                         prln("YES")
#define Yes                         prln("Yes")
#define NO                          prln("NO")
#define No                          prln("No")

#define mod 1000000007

void solve(){
    in1(m);
    InArr(a,m);
    InArr(b,m);
    if(m==1){
        p1(0);
        return;
    }
    ll a1[m];
    ll b1[m];
    fl(i,0,m){
        a1[i]=a[i];
        b1[i]=b[i];
    }
    fr(i,1,m-1){
        a1[i] += a1[i+1];
    }
    fl(i,1,m-1){
        b1[i] +=b1[i-1];
    }


    ll k=0,z=0;
    fl(i,0,m){
        if(z==0 && a1[k+1] > b1[k]){
            a[k]=0;
            k++;
        }
        else{
            if(z==0) a[k]=0;
            z=1;
            
            b[k]=0;
            k++;
        }
    }
    // printArrVec(a);
    // printArrVec(b);

ll sum1=0,sum2=0;
    fl(i,0,m){
        sum1+=a[i];
    }
    fl(i,0,m-1){
        sum2+=b[i];
    }
    p1(max(sum1,sum2));


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