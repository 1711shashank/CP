#include <bits/stdc++.h>
using namespace std;


int main (){ 
    int T;
    cin >>T;
    
    while(T--){
        int ans=0;
        int b,p,f; cin>>b>>p>>f;
        int h,c; cin >>h>>c;
        b=b/2;
        int min;
        if( h > c){
            min =std::min(b,p);
            ans += h*min;
            p -= min;
            b -= min;

            min =std::min(b,f);
            ans += c*min;
            f -= min;
            b -= min;
        }   
        else{
            min =std::min(b,f);
            ans += c*min;
            f -= min;
            b -= min;

            min =std::min(b,p);
            ans += h*min;
            p -= min;
            b -= min;

            

        } 
        cout<<ans<<endl;    

}
}