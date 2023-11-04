#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int minimumcount(int start,int end,unordered_map<int,vector<int>>&mp){
    if(start==end){
        return 0;
    }
    queue<int>q;
    unordered_map<int,int>dista;
    q.push(start);
    
}
void solve(){
  int n;
  cin>>n;
  cin.ignore();
  unordered_map<int,vector<int>>mp;
  for(int i=1;i<=n;i++){
     string line;
        getline(cin, line);
        istringstream iss(line);
        int nodes;

        while (iss >> nodes) {
            mp[i].push_back(nodes);
        }
  }
  int start,end;
  cin>>start>>end;
  int count=minimumcount(start,end,mp);
  cout<<count<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  solve();
 return 0;
}