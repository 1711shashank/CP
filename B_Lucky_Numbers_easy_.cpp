#include <bits/stdc++.h>
using namespace std;
#define ll                          long long
#define pb                          push_back
#define ff                          first
#define ss                          second

#define mem(arr,val)                memset(arr, val, sizeof(arr))
#define pd(n,l)                     cout<<setprecision(l)<<n
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
bool check(string s){
   
    ll a4= 0,a7=0;
    fl(i,0,sz(s)){
        if(s[i] == '7') a7++;
        if(s[i] == '4') a4++;
    }
    if(a4 != a7) return false;

    return true;

}
void solve(){
    ins(n);
    ll l = sz(n);
    if(l&1) l++;

    string temp1 (l/2, '7');
    string temp2 (l/2, '4');

    string temp = temp1 + temp2;

    string s;

    string t1 (sz(temp)-sz(n), '0');
    string n1 = t1+n;

    if(temp < n1) { 
        s = temp2 +'4' + temp1 + '7';
    }
    else {
        s = temp2 + temp1;
    }
    
    string t (sz(s)-sz(n), '0');
    n = t+n;
    

    // p2(s,n);

    for(;true;){

        if(check(s)) {
            if(s >= n){
                 p1(s);
                return;
            }
        }

        // p2(s,n);

        
        fr(j,0,sz(s)){
            if(s[j]=='4'){
               s[j]='7';
               break;
            }
            else{
                s[j]='4';
            }
        }
    }

}



// at
void sol(){
    in1(n);

    string s="";
    while (1)
    {
        s = s+"47";
        sort(all(s));

        do{

            if(stoll(s) >= n){
                p1(s);
                return;
            }
            
        }while(next_permutation(all(s)));

        
    }
    
}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    //in1(T);  while(T--)  
        sol();
        
    return 0;
    // return 0LL;
}