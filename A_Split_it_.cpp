#include <bits/stdc++.h>
using namespace std;
// bool palindrome(string s){
//     int l = s.length();
//     for(int i=0;i<s.length()/2;i++ ){
//         if(s[i] != s[l-i-1]){
//             return false;
//         }
//     }
//     return true;
// }

void solve(){
        int n,k;    cin >>n >>k;
        string s;   cin >> s;

        if(k==0){
            cout << "YES\n";
            return;
        }

        if(n <=2 || n <= k*2){
            cout << "NO\n";
            return;
        }

        int i = 0, j = n - 1;
        while( i<k && i<j ){ //not used palindrome function because we also need (i < k)
            if(s[i]!=s[j]){
                cout << "NO\n";
                return;
            }
            i++;    j--;
        }
        cout << "YES\n";
        
}
int main (){

    int T;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
