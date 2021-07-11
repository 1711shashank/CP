#include <bits/stdc++.h>
using namespace std;

int main (){

    int T;  cin >>T;
    while(T--){
        int n,k;    cin >> n >> k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        

        sort(a,a+n);
        sort(b,b+n);

        int start =0, end=n-1,sum=0;
        for(int i=0;i<k;i++){
            if(a[start] < b[end]){
                swap(a[start] , b[end]); 
            }
            start++,end--;
        }  
        for(int i=0;i<n;i++){
            sum+=a[i];
        }

        cout<<sum<<endl;
 
    }

}