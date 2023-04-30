#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   cin>>str;
   char top=str[0];
   long long count=1;
   long long mx=1;
   for(int i=1;i<str.size();i++)
   {
      if(str[i]==top)
      {
        count++;
      }
      else
      {
        top=str[i];
        mx=max(mx,count);
        count=1;
      }
     /* if(mx>=7)
      {
        cout<<"YES"<<endl;
        break;
      }*/
   }
   mx=max(mx,count);
   if(mx>=7)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
}