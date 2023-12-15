#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
 void subarraysDivByK(vector<int>& nums, int k) 
{
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            cout<<"sums:: "<<sum<<endl;
            mp[sum%k]++;
            cout<<"sum%k "<<sum%k<<" "<<"mp["<<sum%k<<"]" <<mp[sum%k]<<endl;
        }
        int ans=0;
        for(auto i:mp)
        {
            ans+=i.second;
        }
        cout<< ans<<endl;
}

int main()
{
  ios::sync_with_stdio(0);
   cin.tie(0);
  int n;
  cin>>n;
  vector<int>nums(n);
  int k;
  for(int i=0;i<n;i++)
  {
    cin>>nums[i];
  }
  cin>>k;
  subarraysDivByK(nums,k);
 return 0;
}