class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid;
        ios_base::sync_with_stdio(false);
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
                return mid;
            else if(target<nums[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
};