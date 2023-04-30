#include <bits/stdc++.h>
using namespace std;
int main() {
   long long s,n;
   cin>>s>>n;
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
    int x,y;
    cin>>x>>y;
    mp[x]=mp[x]+y;
   }
   int flag=0;
   for(auto i:mp)
   {
    if(s<=i.first)
    {
       flag=1;
       break;
    }
    else
    {
      s=s+i.second;
    }
   }
   if(flag==1)
   {
    cout<<"NO"<<endl;
   }
   else
   {
    cout<<"YES"<<endl;
   }
}