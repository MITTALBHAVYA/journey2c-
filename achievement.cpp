#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
    ll n;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>z[i];
    }
    int mini=INT_MAX;
    //for travelling middle lane
    for(int i=0;i<n;i++)
    {
        //for x travel
        for(int j=0;j<n;j++)
        {
            int stage1=abs(x[j]-y[i]);
            //for z travel
            for(int k=0;k<n;k++)
            {
                int stage2=abs(y[i]-z[k]);
                int stage3=abs(z[k]-x[j]);
                mini=min(mini,stage1+stage2+stage3);
            }
        }
    }
    cout<<mini<<endl;
    return 0;
}
