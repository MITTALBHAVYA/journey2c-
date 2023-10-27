#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define si set<int>
#define srt(v) sort(v.begin(), v.end())

int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
void vout(vector<int> &v) { for (auto x : v) cout << x << " "; cout<<endl; }
void vin(vi &v, int n) { for(int i=0; i<n; i++){ int x; cin>>x; v.push_back(x); } }

#define MOD 1000000007

// void solve(){
//     int n, k; cin>>n>>k;
//     vi v;
//     vin(v, n);
//     srt(v);
//     for(int i=0; i<n-1; i++){
//         if(v[i] <= k){
//             continue;
//         }
//         int x = v[i] - k;
//         v[i] -= x;
//         v[i+1] -= x;
//     }
//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum += v[i];
//     }
//     cout<<sum<<endl;
// }

// void solve(){
//     string s; cin>>s;
//     int n = s.size();
//     int i;
//     for(i=0; i<n; i++){
//         if(s[i] != '.') break;
//     }
//     if(i == n){
//         cout<<"safe"<<endl;
//         return;
//     }
//     vi v, w;
//     int cnt=0;
//     v.push_back(s[i] - '0');
//     for(int j=i+1; j<n; j++){
//         if(s[j] != '.'){
//             v.push_back(cnt);
//             v.push_back(s[j] - '0');
//             cnt=0;
//         }
//         else{
//             cnt++;
//         }
//     }
//     int l = v.size();
//     for(int i=0; i<l-2; i+=2){
//         if(v[i] + v[i+2] > v[i+1]){
//             cout<<"unsafe"<<endl;
//             return;
//         }
//     }
//     cout<<"safe"<<endl;
// }

// void solve(){
//     int n; cin>>n;
//     vi v;
//     vin(v, n);
//     int sum=0;
//     for(int i=0; i<n-1; i++){
//         int s1 = min(v[i], v[i+1]);
//         int s2 = max(v[i], v[i+1]);
//         sum += (s1^s2);
//         for(int j=i+2; j<n; j++){
//             if(v[j] <= s1){
//                 s2 = s1;
//                 s1 = v[j];
//             }
//             else if(v[j] < s2){
//                 s2 = v[j];
//             }
//             sum += (s1^s2);
//         }
//     }
//     cout<<sum<<endl;
// }

vector<vector<bool> > vis(3000, vector<bool> (3000, false));
vector<vector<int> > s(3000, vector<int> (3000, 0));
vector<vector<char> > v(3000, vector<char> (3000));

int rec(int i, int j, int n, int m, vector<vector<bool> > &vid, int &res, int &p, int &q){
    if(i<0 || i>=n || j<0 || j>=m){
        return 0;
    }
    if(v[i][j] == 'B' || vis[i][j] == true){
        return 0;
    }
    if(v[i][j] == '.'){
        if(vid[i][j] == false){
            vid[i][j] = true;
            p = i;
            q = j;
            return 1;
        }
        else{
            return 0;
        }    
    }

    if(v[i][j] == 'W'){
        res++;
    }    
    vis[i][j] = true;
    int ans = 0;
    ans += rec(i+1, j, n, m, vid, res, p, q);
    ans += rec(i-1, j, n, m, vid, res, p, q);
    ans += rec(i, j+1, n, m, vid, res, p, q);
    ans += rec(i, j-1, n, m, vid, res, p, q);
    return ans;
}

void solve(){
    for(int i=0; i<3000; i++){
        for(int j=0; j<3000; j++){
            vis[i][j] = false;
            s[i][j] = 0;
        }
    }

    int n, m; cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char x; cin>>x;
            v[i][j] = x;
        }
    }
    int mx=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j] == 'W' && vis[i][j] == false){
                vector<vector<bool> > vid(3000, vector<bool> (3000, false));
                int res = 0, p=-1, q=-1;
                int x = rec(i, j, n, m, vid, res, p, q);
                // cout<<res<<" ";
                if(x == 1){
                    s[p][q] += res;
                }
            }
        }
    }
    for(int i=0; i<3000; i++){
        for(int j=0; j<3000; j++){
            mx = max(mx, s[i][j]);
        }
    }
    cout<<mx<<endl;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int T; cin>>T;
    int t=1;
    while(T--){
        cout<<"Case #"<<t++<<": ";
        solve();
    }
    return 0;
}
