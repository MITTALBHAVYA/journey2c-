#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string bypass="";
    for(int i=0;i<str.size();i+=2)
    {
        bypass+=str[i];
    }
    sort(bypass.begin(),bypass.end());
    cout<<bypass[0];
    for(int i=1;i<bypass.size();i++)
    {
        cout<<'+'<<bypass[i];
    }
    cout<<endl;
    return 0;
}