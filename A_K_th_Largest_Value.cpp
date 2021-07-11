    #include <bits/stdc++.h>
    using namespace std;
         
        int main(){
            int t,c=0;
            
            int n,q;
            cin >> n >> q;
     
     
            int a[n];
     
            for(int i=1;i<=n;i++){
                cin >> a[i];
                c+=a[i];
            }
     
            
            
            while(q--){
                int x,k;
                cin >> x >> k;
                
     
                if(x==1){
                   if(a[k]==1) c--;
                   else c++;
     
                   a[k]=1-a[k];
                }
                else {
                    if(c >= k) cout << 1 <<endl;
                    else cout << 0 <<endl; 
     
                }
     
            }
     
            return 0;
        }