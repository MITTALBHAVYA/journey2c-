#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
void solve()
{
    ll n, targetSum;
    cin >> n >> targetSum;
    vector<pair<ll, ll>> vect;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vect.push_back({x, i});
    }
    sort(vect.begin(), vect.end());
    for (ll i = 0; i < n - 3; i++)
    {
        bool flag = false;
        for (ll j = i + 1; j < n - 2; j++)
        {
            ll l = j + 1;
            ll r = vect.size() - 1;
            while (l < r)
            {
                ll sum = vect[i].first +vect[j].first+ vect[l].first + vect[r].first;
                if (sum == targetSum)
                {
                    ans.push_back(vect[i].second + 1);
                    ans.push_back(vect[j].second + 1);
                    ans.push_back(vect[l].second + 1);
                    ans.push_back(vect[r].second + 1);
                    flag = true;
                    break;
                }
                else if (sum < targetSum)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(ans.size()){
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 1;
    while (test--)
    {
        solve();
    }
    return 0;
}