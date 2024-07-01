class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                ans.emplace_back(nums[i]);
            else
                cnt++;
        }
        for(int i=0;i<cnt;i++)
            ans.emplace_back(0);
        swap(nums,ans);
    }
};