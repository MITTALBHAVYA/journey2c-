#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve()
{
    long long n,k;
    cin>>n>>k;
    ll a[n],b[n];
    vector<pair<int,int>>vect;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        vect.push_back(make_pair(i+1,a[i]));
    }
    sort(vect.begin(), vect.end(), sortbysec);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n);
    int ans[n];
    for(int i=0;i<n;i++)
    {
        ans[vect[i].first - 1]=b[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main() {
    ll test;
 cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
