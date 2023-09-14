#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int solve(int low, int high, vector<int> &nums, int target)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {return mid;}
        if(nums[high]==target)
        {
            return high;
        }
        if(nums[low]==target)
        {
            return low;
        }
        if(nums[low]>target && nums[high]<target)
        {
            return -1;
        }
        if(nums[mid]<target)
        {
            if(nums[low]<target && nums[high]<target)
            {
                return max(solve(low+1,mid-1,nums,target),solve(mid+1,high-1,nums,target));
            }
            low=mid+1;
            high--;
            return solve(low,high,nums,target);
        }
        if(nums[mid]>target)
        {
            if(nums[low]>target && nums[high]>target)
            {
                return max(solve(low+1,mid-1,nums,target),solve(mid+1,high-1,nums,target));
            }
            low++;
            high=mid-1;
            return solve(low,mid,nums,target);
        }
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    cout<<"search function is called "<<endl;
    int low = 0, high = nums.size() - 1;
    int ans = solve(low, high, nums, target);
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<"enter the array and target"<<endl;
    int target;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cin>>target;
    cout<<"answer is here:: "<<search(nums,target)<<endl;
    return 0;
}