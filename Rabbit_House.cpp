#include <bits/stdc++.h>
using namespace std;

int solve(){

    int n,m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
      
    
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    int T=1;
	cin >> T;
    int z=1;
	while(T--) {
        int c = solve();
        cout<<"Case #"<< z++ <<": "<<c<<endl;

    }
    return 0;
}