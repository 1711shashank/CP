#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;  cin >> n;
    deque<int> dq; 
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        dq.push_back(temp);
    }
    int Sereja=0,Dima=0;
    while(dq.size() != 0){
        if(dq.front() > dq.back()){
            Sereja = Sereja + dq.front();
            dq.pop_front();
        }
        else{
            Sereja =  Sereja + dq.back();
            dq.pop_back();
        }
        if(dq.size() == 0) break;
        if(dq.front() > dq.back()){
            Dima = Dima + dq.front();
            dq.pop_front();
        }
        else{
            Dima = Dima + dq.back();
            dq.pop_back();
        }
    }
    cout<<Sereja <<" "<<Dima;
}