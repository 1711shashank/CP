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


bool isValid(string s) {
    stack<char> stack;

    if(s.length() == 0){
        return true;
    }
    if(s.length() == 1){
        return false;
    }
    
    for(int i =0 ; i < s.length(); i++){
        char c = s[i];
        
        if( c == ')'){
            if(stack.size() == 0 ) return false;
            
            if(c == ')' && stack.top() != '(') return false;
            stack.pop();
            
         } else {
            stack.push(c);
        }
    }
    if(stack.size() == 0) return true;
    return false;
}
void solve(){
    in1(n);
    inS(s);
    
    if(s[0] == 0) {println("NO");   return;}
    string s1="",s2="";
    stack<char> stk;


    fl(i,0,n){
        if( s[i] == '1' ){
            if(stk.size() == 0){
                stk.push('(');
                s1 = s1 + '(';
            }
            else if(stk.top() == '(' ) {
                stk.pop();
                s1 = s1 + ')';

            }            
        }
        else {
            if(stk.size() == 0){
                stk.push('(');
                s1 = s1 + ')';
            }
            else if(stk.top() == '(' ) {
                stk.pop();
                s1 = s1 + '(';

            }    

        }
    }
    fl(i,0,n){
        if( s[i] == '1' ){
            s2= s2 + s1[i];
        }
        else { 
            char ch = s1[i];
            if(ch == '(')   s2= s2 + ')';
            else            s2= s2 + '(';

        }
    }
    if(isValid(s1) && stk.size()==0){
        println("YES");
        println(s2);
        println(s1);
    }
    else {
        println("NO");
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