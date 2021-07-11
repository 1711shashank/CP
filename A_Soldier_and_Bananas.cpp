#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int k,n,w;
    cin >> k >> n >> w;
    int times=1;
    int sum = 0;
    while (w--){
        sum += k*times;
        times++;
    }
    if (sum-n > 0)  cout << sum-n;
    else cout << 0;
    return 0;

}
