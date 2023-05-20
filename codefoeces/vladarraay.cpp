#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
       cin>>arr[i];
    }
    sort(arr,arr+len);
    int odd=0,even=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]%2==0)
        {
            if(odd>0)
            {
                odd++;
            }
           even++;
        }
        else{
            if(odd>0)
            {
                even++;
            }
           odd++;
        }
    }
    if(odd==len||even==len)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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
