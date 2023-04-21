#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    int t;
    cin>>t;
    int ca=1;
    while(t--)
    {
        unordered_map<char,char>mp;
        for(int i=65;i<=90;i++)
        {
            char x;
            cin>>x;
            mp[i]=x;
        }
       /* for(int i=65;i<=90;i++)
        {
            cout<<mp[i]<<" ";
        }
        cout<<endl;
        cout<<mp['A']<<" "<<mp['B']<<endl;*/
        int no;
        cin>>no;
        int flag=0;
        unordered_map<string,int>tt;
        for(int i=0;i<no;i++)
        {
            string str;
            cin>>str;
            //cout<<str<<endl;
            string p="";
            for(int i=0;i<str.size();i++)
            {
               p=p+mp[str[i]];
            }
          // cout<<p<<endl;
            if(tt[p]!=0)
            {
                flag=1;
                //break;
                //tt[p]=true;
            }
            else
            {
              tt[p]=1;
            }
        }
        if(flag==1)
        {
            cout<<"Case #"<<ca<<": "<<"YES"<<endl;
        }
        else
        {
            cout<<"Case #"<<ca<<": "<<"NO"<<endl;
        }
        ca++;
       // sort(in,in+p);
    }
 }