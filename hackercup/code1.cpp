#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ll long long int

//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define sll set<ll>

#define f first
#define sc second
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pno cout << -1

#ifdef UTSAV
#include "handle_debug.hpp"
#define debug(...) cout<<'[';debug_print(#_VA_ARGS, __VA_ARGS_);cout<<"]\n";
#else
#define debug(...)
#endif

const ll mod=1e9+7;

#define fori(i,a,b) for(ll i=a;i<b;i++)
#define vprint(v) for (auto it : v) cout << it << " "
#define all(a) a.begin(),a.end()

ll gcd(ll a, ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a, ll b){return (a/gcd(a,b))*b;}
ll n,m;

void dfs(vector<string> &v,ll i,ll j,vector<vector<bool>> &vis,ll &cnt,ll &cnt2,vector<pair<ll,ll>>&ele){
	if(vis[i][j]) return;
	vis[i][j]=true;
    cnt2++;
	if(i!=0 && v[i-1][j]=='W'){
		dfs(v,i-1,j,vis,cnt,cnt2,ele);
	}
	else if(i!=0 && v[i-1][j]=='.' && !vis[i-1][j]){ 
		cnt++;
        ele.push_back(make_pair(i-1,j));
		vis[i-1][j]=true;
	}
	if(i!=(n-1) && v[i+1][j]=='W'){
		dfs(v,i+1,j,vis,cnt,cnt2,ele);
	}
	else if(i!=(n-1) && v[i+1][j]=='.' && !vis[i+1][j]){
		 cnt++;
         ele.push_back(make_pair(i+1,j));
		 vis[i+1][j]=true;
	}
	if(j!=0 && v[i][j-1]=='W'){
		dfs(v,i,j-1,vis,cnt,cnt2,ele);
	}
	else if(j!=0 && v[i][j-1]=='.' && !vis[i][j-1]){ 
		cnt++;
        ele.push_back(make_pair(i,j-1));
		vis[i][j-1]=true;
	}
	if(j!=(m-1) && v[i][j+1]=='W'){
		dfs(v,i,j+1,vis,cnt,cnt2,ele);
	}
	else if(j!=(m-1) && v[i][j+1]=='.' && !vis[i][j+1]){
		cnt++;
        ele.push_back(make_pair(i,j+1));
		vis[i][j+1]=true;
	}
	// debug(i,j,cnt);
}

void res(vector<string> &v,ll i,ll j,vector<vector<bool>> &vis){
	if(i!=0 && v[i-1][j]=='.'){
		vis[i-1][j]=false;
	}
	if(i!=(n-1) && v[i+1][j]=='.'){
		 vis[i+1][j]=false;
	}
	if(j!=0 && v[i][j-1]=='.'){
		vis[i][j-1]=false;
	}
	if(j!=(m-1) && v[i][j+1]=='.'){
		vis[i][j+1]=false;
	}
}

void solve(){
	cin>>n>>m;
	vector<string> v;
	fori(i,0,n){
		string x;
		cin>>x;
		v.pb(x);
	}
    ll ans=0;
	vector<vector<bool>> vis(n,vector<bool>(m,false));
    set<pair<pair<ll,ll>,ll>>mp;
	fori(i,0,n){
		fori(j,0,m){
			if(!vis[i][j] && v[i][j]=='W'){
				ll cnt=0,cnt2=0;
                vector<pair<ll,ll>>ele;
				dfs(v,i,j,vis,cnt,cnt2,ele);
				res(v,i,j,vis);
				if(cnt==1){
                    ll x;
                    auto it=mp.lower_bound({ele[0],-1});
                    if(it->first==ele[0])
                    {
                        pair<pair<ll,ll>,ll> p={ele[0],cnt2 + it->second};
                        mp.erase(it);
                        mp.insert(p);
                         x=it->second;
                    }
                    else{
                     mp.insert({ele[0],cnt2});
                     x=cnt2;
                    }
                    //sumi[ele[0].first][ele[0].second]+=cnt2;
                    //ll x=sumi[ele[0].first][ele[0].second]
					ans=max(ans,x);
				}
			}
		}
	}
	cout<<ans<<endl;
	// vll a(n);
	// for(auto &x:a) cin>>x;
	// string s;
	// cin>>s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	// solve();
    ll t;
    cin>>t;
    int po=1;
    while(t--){
        cout<<"Case #"<<po<<": ";solve();
        po++;
        // cout<<"\n";
    }
    return 0;
}