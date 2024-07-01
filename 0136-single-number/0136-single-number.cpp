class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> l1;
        for(int i=0;i<nums.size();i++)
        {
            l1[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(l1[nums[i]]==1)
                return nums[i];
        }
        return 0;
    }
};