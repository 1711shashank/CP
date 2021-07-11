#include <bits/stdc++.h>
using namespace std;
#define ll                          long long

#define fl(i,a,b)                   for(int i=a;i<b;i++)

#define inS(a)                      string s; cin>>s;
#define in1(a)                      int a;          cin>>a;
#define in2(a, b)                   int a, b;       cin >> a >> b;
#define in3(a, b, c)                int a, b, c;    cin >> a >> b >> c;

#define VecInput(v,n)               vector<int> v(n); fl(i,0,n) cin>>v[i];
#define ArrInput(arr,n)             int arr[n]; fl(i,0,n) cin>>arr[i];
#define StrInput(s)                 string(s); cin >> (s);
#define len(s)                      s.length()


#define PrintArr(arr,n)             fl(i,0,n) cout << arr[i] <<" "; cout<<"\n";
#define println(n)                  cout << n << "\n"   
#define printls(n)                  cout << n << " "
#define print(n)                    cout << n

void solve(){

    in1(n);     ArrInput(a,n);

    if(n<=2){
        println(0);
        return;
    }

    set<int> s;

    int max = a[0];

    fl(i,1,n){
        max = std::max(max, a[i]);
        s.insert(a[i]-a[i-1]);
    }
    
    if(s.size() > 2) {
        println(-1);
        return;
    }
    if(s.size()==1){
        println(0);
        return;
    }

    int m = *s.begin();
    s.erase(s.begin());
    int c = *s.begin();

    if((m<=0 && c<=0) || (m>=0 && c>=0)){
        println(-1);
        return;
    }

    if(m < c) swap(m,c);
  
    if(max > m-c){
		cout<<-1<<endl;
	    return;
	}
    
    printls(m-c); println(m);
    
}

//int32_t 
int32_t main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    int T=1;
	cin >> T;
	while(T--) 
        solve();
        
    return 0;
    // return 0LL;
}