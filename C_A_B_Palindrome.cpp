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

    in2(a,b);
    inS(s);
    ll l = len(s);

    ll one=0,zero=0;

    fl(i,0,l){
        if(s[i]=='1') one++;
        if(s[i]=='0') zero++;
    }

    if(zero > a || one > b){
        println(-1);
        return;
    }

    a-=zero;
    b-=one;

    ll st=0,end=l-1;

    while(st < end){

        if(s[st] == '0'){
            if(s[end]=='1') { println(-1); return;}
            if(s[end]=='?') {
                if(a<1){
                    println(-1); return;
                }
                else {
                    s[end] = '0';
                    a--;
                }
            }
        }
        else if(s[st] == '1'){
            if(s[end]=='0') { println(-1); return;}
            if(s[end]=='?') {
                if(b<1){
                    println(-1); return;
                }
                else {
                    s[end] = '1';
                    b--;
                }
            }
        }

        if(s[end] == '0'){
            if(s[st]=='1'){ println(-1); return;}
            if(s[st]=='?'){
                if(a<1){
                    println(-1); return;
                }
                else {
                    s[st]='0';
                    a--;
                }
            }

        }
        else if(s[end] == '1'){
            if(s[st]=='0'){ println(-1); return;}
            if(s[st]=='?'){
                if(b<1){
                    println(-1); return;
                }
                else {
                    s[st]='1';
                    b--;
                }
            }

        }
        st++;
        end--;
   
    }
    st=0,end=l-1;
    while(st < end){
        if(s[st] =='?'){
            if(a>1){
                s[st]='0';
                s[end]='0';
                a-=2;
            }
            else if(b>1){
                s[st]='1';
                s[end]='1';
                b-=2;
            }
            else {
                println(-1);
                return;
            }
        }
        st++;
        end--;

    }
    if(st == end){
        if(s[st] == '?'){
            if(a>0) s[st]='0';
            else if(b>0) s[st]='1';
            else {
                println(-1);
                return;
            } 
        }
    }
    
    println(s);
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