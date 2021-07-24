#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second

#define mem(arr, val) (arr, val, sizeof(arr))
#define ps(n, l) fixed << setprecision(l) << n
#define lcm(a, b) (a / __gcd(a, b)) * b

#define fl(i, a, b) for (ll i = a; i < b; i++)
#define fr(i, a, b) for (ll i = b - 1; i >= a; i--)

#define ins(s) \
    string s;  \
    cin >> s;
#define in1(a) \
    ll a;      \
    cin >> a;
#define in2(a, b) \
    ll a, b;      \
    cin >> a >> b;
#define in3(a, b, c) \
    ll a, b, c;      \
    cin >> a >> b >> c;
#define in4(a, b, c, d) \
    ll a, b, c, d;      \
    cin >> a >> b >> c >> d;

#define InVec(v, n)  \
    vector<ll> v(n); \
    fl(i, 0, n) cin >> v[i];
#define InArr(a, n) \
    ll a[n];        \
    fl(i, 0, n) cin >> a[i];
#define InArrSum(a, n, sum) \
    ll a[n];                \
    fl(i, 0, n)             \
    {                       \
        cin >> a[i];        \
        sum += a[i];        \
    }
#define sz(s) s.size()

#define dsc greater<ll>()
#define all(x) (x).begin(), (x).end()

#define println(n) cout << n << "\n"
#define printls(n) cout << n << " "
#define print(n) cout << n
#define ln cout << endl

#define printArrVec(a) \
    for (auto it : a)  \
    cout << it << " "
#define p1(a) \
    ;         \
    cout << a << endl;
#define p2(a, b) \
    ;            \
    cout << a << " " << b << endl;
#define p3(a, b, c) \
    ;               \
    cout << a << " " << b << " " << c << endl;
#define YES println("YES")
#define Yes println("Yes")
#define NO println("NO")
#define No println("No")

#define mod 1000000007

void solve()
{
    in2(n, m);

    fl(i,0,n){
        fl(j,0,m){
            if(i==0 || i==n-1){
                if(!(j&1))
                    print(1);
                else
                    print(0);
            }
            else{
                if(j==0 || j==m-1){
                    if (i & 1)
                        print(0);
                    else if( i!=n-2 )
                        print(1);
                    else
                        print(0);
                }
                else
                    print(0);
            } 

        }
        ln;
        
    }
    ln;
}

//int32_t
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    in1(T);
    while (T--)
        solve();

    return 0;
    // return 0LL;
}