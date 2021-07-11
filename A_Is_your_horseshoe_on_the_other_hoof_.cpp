#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int s[4],a=0;
   for(int i=0;i<4;i++)
   {
       cin>>s[i];
   }
   sort(s,s+4);
   for(int i=0;i<4;i++)
   {
       if((i>=1)&&(s[i]==s[i-1]))
       {
           a++;
       }
   }
   cout<<a;
}