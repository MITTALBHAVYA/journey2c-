#include <bits/stdc++.h>
using namespace std;
 
int n;
 
int main() {
    string str;
    cin>>str;
    int size=str.size();
    int flag=0;
    for(int i=1;i<size;i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
           flag=1;
           break;
        }
    }
    if(flag==1)
    {
        cout<<str<<endl;
    }
    else
    {
       if(str[0]==tolower(str[0]))
       {
        str[0]=toupper(str[0]);
       }
       else if(str[0]==toupper(str[0]))
       {
        str[0]=tolower(str[0]);
       }
       cout<<str[0];
       for(int i=1;i<size;i++)
       {
        str[i]=tolower(str[i]);
        cout<<str[i];
       }
       cout<<endl;    
    }
}