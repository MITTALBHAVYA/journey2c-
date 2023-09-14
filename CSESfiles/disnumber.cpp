// #include <bits/stdc++.h>
// #define ll long long
// #define mod 1000000007
// using namespace std;
// void solve(){
//  ll int n;
//   cin>>n;
//   unordered_set<ll int>se;
//   for(ll int i=0;i<n;i++)
//   {
//     ll int x;
//     cin>>x;
//     se.insert(x);
//   }
//   cout<<se.size()<<endl;
// }
// int main()
// {
//   ios::sync_with_stdio(0);
//    cin.tie(0);
//    solve();
//  return 0;
// }
#include <iostream>
#include <set>

void solve() {
    int n;
    std::cin >> n;
    
    std::set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        s.insert(x);
    }
    
    std::cout << s.size() << std::endl;
}

int main() {
    solve();
    return 0;
}
