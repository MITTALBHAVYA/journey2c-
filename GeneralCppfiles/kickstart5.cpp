#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ca=1;
    while(t--)
    { 
        int n;
        cin>>n;
        vector<int>ans;
        unordered_map<int,int>mp;
        //stack<int>st;
        int top=0;
        int flag=0;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(top==0)
            {
               top=x;
            }
           else if(top!=x && mp[x]==0)
            {
                ans.push_back(top);
                mp[top]=1;
                top=x;
            }
            else if(top!=x && mp[x]!=0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            ans.push_back(top);
            cout<<"Case #"<<ca<<": ";
            for(auto i:ans)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"Case #"<<ca<<": IMPOSSIBLE"<<endl;
        }
        ca ++;
    }
}