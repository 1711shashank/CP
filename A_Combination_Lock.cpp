    #include <bits/stdc++.h>
    using namespace std;
     
    int main (){
        int n;cin>>n;
        string s1,s2;
        cin >>s1>>s2;
        //cout<<s2;
        int c=0,i=0;
        while(n>0){
            n--;
            int d1 = (int)(s1[i]); 
            int d2 = (int)(s2[i]); 
            int diff = std::abs(d1-d2);
            if(diff > 5) c+=10-diff;
            else c+=diff;
            i++;
        }
        cout<<c;
     
    }