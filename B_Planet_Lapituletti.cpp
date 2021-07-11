#include <bits/stdc++.h>
using namespace std;
int h,m;
int a[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};


bool valid( int hour, int min){
    if( a[hour%10] == -1 || a[hour/10] == -1 || a[min%10] == -1 || a[min/10] == -1 ){
        return false;
    }
    int X = a[hour%10]*10 + a[hour/10];
    int Y = a[min%10]*10 + a[min/10];

    if( X < m && Y < h){
        return true;
    }
    return false;

}


int main (){

    
    int T;  cin >> T;
    while(T--){

        cin >> h >> m;
        string s ;
        cin >> s;
        
        int hour = stoi( s.substr(0,2)); 
        int min = stoi( s.substr(3,4));

        while( !valid(hour,min)){
            min++;
            if(min == m) hour++;

            min = min%m;
            hour = hour%h;
        }
        printf("%02d:",hour);
        printf("%02d\n",min);


    }
    return 0;
}
