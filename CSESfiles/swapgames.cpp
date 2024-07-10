#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll x[] = {0, 1, 2, 3, 4, 5, 0, 3, 6, 1, 4, 7}; 
ll y[] = {3, 4, 5, 6, 7, 8, 1, 4, 7, 2, 5, 8}; 
unordered_map<string, ll> mp;
void calcu()
{
    string start = "123456789";
    mp[start] = 1;
    queue<string> q;
    q.push(start);
    while (!q.empty())
    {
        string it = q.front();
        ll dist = mp[it];
        q.pop();
        for (ll i = 0; i < 12; i++)
        {
            swap(it[x[i]], it[y[i]]);
            if (!mp[it])
            {
                mp[it] = dist + 1;
                q.push(it);
            }
            swap(it[x[i]], it[y[i]]);
        }
    }
}
void solve()
{
    string str="";
    for(ll i=0;i<9;i++){
        string a;
        cin>>a;
        str+=a;
    }
    cout<<mp[str]-1<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    calcu();
    int test = 1;
    while (test--)
    {
        solve();
    }
    return 0;
}