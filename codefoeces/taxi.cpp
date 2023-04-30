#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n,a1=0,a2=0,a3=0,a4=0;
   cin>>n;
   unordered_map<int,int>mp(0);
   for(long long i=0;i<n;i++)
   {
     int x;
     cin>>x;
     mp[x]++;
   }
   a2=mp[2]/2;
   mp[2]=mp[2]%2;
   a4=mp[4];
   mp[4]=0;
   if(mp[1]>=mp[3])
   {
    a1=mp[3];//here 1 and 3 are combined
    mp[1]=mp[1]-mp[3];
    mp[3]=0;
   }
   else
   {
    a1=mp[1];//1 and 3 are combined
    mp[3]=mp[3]-mp[1];
    mp[1]=0;
    a1+=mp[3];//here too
    mp[3]=0;
   }
   if(mp[2]==1)
   {
    a2+=1;
    mp[2]=0;
    mp[1]=mp[1]-2;
   }
   if(mp[1]>0&&mp[1]%4==0)
   {
    a3+=mp[1]/4;
   }
   else if(mp[1]>0&&mp[1]%4!=0)
   {
    a3+=(mp[1]/4) + 1;
   }
   long long sum=a1+a2+a3+a4;
   cout<<sum<<endl;
}