#include <bits/stdc++.h>
    int solve(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>dp(n,0);
        dp[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            int inc = dp[i-2] + nums[i];
            int exc = dp[i-1] + 0 ;
            dp[i]=max(inc,exc);
        }
        return dp[n-1];
    } 
    int rob(vector<int>& nums) {
        int ans = solve(nums);
        return ans;
    }