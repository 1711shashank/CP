#include <bits/stdc++.h>
using namespace std;

int main (){

    int T;  cin >> T;
    while(T--){
        int z=0;
        int n,k;    cin >> n >> k;
        int temp;

        map<int, int> mst;
        map<int, int>::iterator itr; 

        int mex,max=0;

        for(int i=0;i<n;i++){
            cin >> temp;
            if(max < temp) max = temp;
            mst[temp]++;
            
        }
        int number;
        while(k--){
            
            for(int i=0;mst.size();i++){
                if(!mst.count(i)){
                    mex=i;
                    break;
                }
            }
            if(mex > max) {
                cout << n + k+1 <<endl;
                z=1;
                break;
                
            }
            number = ((mex + max +1)/2);

            if(mst[number] > 0){
                break;
            }
            mst[number]++;
            
            if(max < number) max = number;


        }
        if(z==0){
            cout << mst.size()<<endl;
        }
        
    }

    return 0;
}
