#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u'||tolower(str[i])=='y')
        {
            continue;
        }
        else
        {
            char ch=tolower(str[i]);
            cout<<"."<<ch;
        }
    }
    cout<<endl;
    return 0;
}