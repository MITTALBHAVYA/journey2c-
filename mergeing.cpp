class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int index = m+n-1;
        int l = m-1 , r = n-1;
        if(m == 0)
        {
            nums1 = nums2;
        }
        if(n == 0)
        {
            return;
        }
        while(r>=0 && l>=0)
        {
            if(nums1[l] < nums2[r])
            {
                nums1[index--] = nums2[r];
                r--;
            }
            else
            {
                 nums1[index--] = nums1[l];
                 l--;
            }
        }
        while(r>=0)
        {
            nums1[index--] = nums2[r];
            r--;
        }
    }
};