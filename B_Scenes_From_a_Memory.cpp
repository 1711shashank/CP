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


bool prime[100001];

void SieveOfEratosthenes(ll n){
    
    memset(prime, true, sizeof(prime));

    prime[0]=false;
    prime[1]=false;

    fl(i,2,n+1){
        if(prime[i] == true){
            for(ll j=i*i; j<=n; j+=i){
                prime[j]=false;            
            }
        }  
    }
    
}
  
bool countFreq(string s1, string s)
{
    ll j=0;
    fl(i,0,sz(s)){
        if( s[i] == s1[j]){
            j++;
            if(j == sz(s1)){
                return true;
            }
        }
    }
    return false;
}

void solve(){

    in1(n);
    ins(s);

    fl(i,1,100000){
        if( prime[i] == false){
            string s1 = to_string(i);
            
            // pls(s1);
            
            if(countFreq(s1, s)){
                p1((sz(s1)));
                p1(s1);

                return;
            }
        }
    }

}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    ll n = 100000;
    SieveOfEratosthenes(n);

    in1(T);  while(T--)  
        solve();
        
    return 0;
    // return 0LL;
}