#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string str;
    cin>>str;
    ll len=str.size();
    ll run=len/2;
    if(len<=3)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        char ch=str[0];
        ll flag=0;
        for(ll i=1;i<run;i++)
        {
             if(str[i]!=ch)
             {
                flag=1;
                break;
             }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
