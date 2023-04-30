#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string,int>mp(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        mp[str]++;
        if(mp[str]>1)
        {
            cout<<str<<(mp[str]-1)<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }
    }
}