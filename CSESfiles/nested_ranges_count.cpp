#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

map<int,int> mp;
const int N = 2e5+1;
int T[N+1]={0};
void update(int n, int x, int val){
    for(;x<=n; x+=x&-x) T[x]+=val;
}
int query(int x){
    int s=0;
    for(;x>0;x-=x&-x) s+=T[x];
    return s;
}

bool comp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b) {
    if (a.first.first == b.first.first)
        return a.first.second > b.first.second;
    return a.first.first < b.first.first;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; 
    cin>>n;
    set<int> b;
    vector<pair<pair<int,int>, int>> v(n);
    for (int i = 0; i < n; i++) {
        int x, y; cin>>x>>y;
        v[i].second = i;
        v[i].first = {x, y};
        b.insert(y);
    }
    int cnt = 0;
    for (auto i: b) {
        mp[i] = ++cnt;
    }
    sort(v.begin(), v.end(), comp);
    update(cnt, mp[v[n-1].first.second], 1);
    int ans[n] = {0};
    for (int i = n-2; i >= 0; i--) {
        ans[v[i].second] += query(mp[v[i].first.second]);
        update(cnt, mp[v[i].first.second], 1);
    }

    for (int i = 0; i < n; i++)
        cout<<ans[i]<<' ';

    memset(ans, 0, sizeof ans);
    memset(T, 0, sizeof T);
    update(cnt, 1, 1);
    update(cnt, mp[v[0].first.second] + 1, -1);
    for (int i = 1; i < n; i++) {
        ans[v[i].second] += query(mp[v[i].first.second]);
        update(cnt, 1, 1);
        update(cnt, mp[v[i].first.second] + 1, -1);
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
        cout<<ans[i]<<' ';
}