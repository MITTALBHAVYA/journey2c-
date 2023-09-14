#include <bits/stdc++.h>
using namespace std;
int main() {
int t;cin>>t;while(t--){
int n; cin >> n;
map<int,int> m;
for(int i=0;i<n;i++){
int b,d; cin>>b>>d;
m[d] ;
if (b>m[d]){m[d]=b;}}
if (m.size()==10){cout<<m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+m[9]+m[10]<<"\n";}
else{cout<<"MOREPROBLEMS"<<"\n";}
}
return 0;
}
//2nd
#include <bits/stdc++.h>
using namespace std;
 
 
int cnt[3][26];
vector<array<int, 2>> ans;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int limit = 1e9;
    for (int i = 0; i < 3; ++i) {
        string s;
        cin >> s;
        limit = min(limit, (int) s.size());
        for (char ch : s) {
            ++cnt[i][ch - 'A'];
        }
    }
 
    for (int c = 0; c < 26; ++c) {
        vector<int> ind(3);
        iota(ind.begin(), ind.end(), 0);
        while ((int) ans.size() < limit) {
            sort(ind.begin(), ind.end(), [=](int x, int y){
                    return cnt[x][c] > cnt[y][c];
                });
            if (cnt[ind[1]][c]) {
                --cnt[ind[0]][c];
                --cnt[ind[1]][c];
                ans.push_back({c + 'A', ind[2]});
            } else {
                break;
            }
        }
    }
 
    string s[3];
    for (int i = 0; i < 3; ++i) {
        for (int c = 0; c < 26; ++c) {
            while (cnt[i][c]) {
                s[i].push_back(c + 'A');
                --cnt[i][c];
            }
        }
    }
 
    for (auto &p : ans) {
        int ind = p[1];
        p[1] = s[ind].back();
        s[ind].pop_back();
    }
 
    while (true) {
        for (int i = 0; i < 3; ++i) {
            for (int j = i + 1; j < 3; ++j) {
                if (s[i].size() < s[j].size()) {
                    swap(s[i], s[j]);
                }
            }
        }
        if (s[0].empty()) {
            break;
        }
        if (s[1].empty()) {
            s[1] = s[0];
        }
        ans.push_back({s[0].back(), s[1].back()});
        s[0].pop_back();
        s[1].pop_back();
    }
 
    cout << ans.size() << '\n';
    for (auto p : ans) {
        cout << (char) p[0] << (char) p[1] << '\n';
    }
 
    return 0;
}

//3rd
