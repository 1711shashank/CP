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
    in1(n);
    char a[n][n];
    int x1,x2,y1,y2;
    int z=1;
    fl(i,0,n){
        fl(j,0,n){
            cin>>a[i][j];
            
            
            if(a[i][j] == '*' && z==1){
                x1=i; //0
                y1=j; //0
                z=2;
            }
            if(a[i][j] == '*' && z==2){
                x2=i; //1
                y2=j; //1
            }
        }
    }
    if(x1==x2 && x1 == 0){
        a[x1+1][y1] = '*';
        a[x2+1][y2] = '*';
    }
    else if(x1==x2 && x1 != 0){
        a[x1-1][y1] = '*';
        a[x2-1][y2] = '*';
    }

    else if(y1==y2 && y1 == 0){
        a[x1][y1+1] = '*';
        a[x2][y2+1] = '*';
    }
    else if(y1==y2 && y1 != 0){
        a[x1][y1-1] = '*';
        a[x2][y2-1] = '*';
    }
    else {
        a[x1][y2] = '*';
        a[x2][y1] = '*';
    }

    fl(i,0,n){
        fl(j,0,n){
            cout<<a[i][j];
        }
        cout<<endl;
    }


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