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

int a[2005];
ll n;

void task1(){
    for(int i = 0; i < 2 * n; i += 2){
		swap(a[i], a[i + 1]);
	}
}

void task2(){
	for(int i = 0; i < n; i++){
		swap(a[i], a[i + n]);
	}
}
bool check(){
	for(int i = 1; i <= 2 * n; ++i){
		if(a[i] != i)
			return false;
	}
	return true;
}


void solve(){
    cin>>n;
    for(int i = 0; i < 2 * n; i++){
		cin >> a[i];
	}

    if(check()){
		println(0);
		return;
	}
    int temp=1;
    ll ans;
    
    while( a[0]!=1 ){
        if(temp){
            for(int i = 0; i < n; i++){
                swap(a[i], a[i + n]);
            }
        }
        else {
            for(int i = 0; i < 2 * n; i += 2){
                swap(a[i], a[i + 1]);
            }
        }   
        ans++;    
        temp^=1;        //switch 0 1 0 1 0 1 in each operation  

    }
    bool flag = 1;
    for(int i = 0; i < 2 * n; i += 2){
        if(a[i]!=i+1)
        {
            flag=0;
            break;
        }
    }
    if(flag){
        println(ans);
    }
    else println(-1);



       
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