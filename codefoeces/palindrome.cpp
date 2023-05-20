#include <bits/stdc++.h>
using namespace std;
int main() {
   int test;
   cin>>test;
   while(test--)
   {
    string str;
    cin>>str;
    int len=str.size();
    int check=0;
    if(len==1)
    {
        cout<<-1<<endl;
    }
    if(len==2)
    {
        cout<<-1<<endl;
    }
    else
    {
    for(int i=0;i<len/2 ;i++)
    {
        if(str[i]!=str[i+1])
        {
            check=1;
            break;
        }
    }
    if(check==1)
    {
        cout<<len-1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    }
   }
}