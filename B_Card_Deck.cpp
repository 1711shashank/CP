#include <bits/stdc++.h>
using namespace std;

int main (){

    int T; cin >> T;
    while(T--){
        int n;  cin >> n;

        int a[n];

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        stack<int> stk;
        int c=1;
        for(int i=1;i<n;i++){
            if(a[i-1] > a[i]){
                c++;
                cout << a[i-1] << " "<< c <<" " << a[i]<<endl;
            }
            else{
                
                stk.push(c);
                c=1;
            }
           
        }
        cout<<c;
        stk.push(c);
        
        int temp;
        int start,end=n;
        while(stk.size()>0){

            temp = stk.top();   stk.pop();

            cout<<temp;

            start=end-temp;

            // for(int i=start;i<end;i++){
            //     cout << a[i] << " ";
            // } 

            end = start;
        }
        


    }
    
    return 0;
}
