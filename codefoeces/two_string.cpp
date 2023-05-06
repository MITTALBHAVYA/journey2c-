#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    cin>>str;
    int flag=0;
    if((str.find("AB")!=-1 && str.find("BA",str.find("AB")+2)!=-1))
    {
        flag++;
    }
    if((str.find("BA")!=-1 && str.find("AB",str.find("BA")+2)!=-1))
    {
        flag++;
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
}