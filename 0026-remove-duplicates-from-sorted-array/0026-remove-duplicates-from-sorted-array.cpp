class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
        }
        vector<int> temp;
        for(auto i:ans)
        {
            temp.emplace_back(i.first);
        }
        swap(temp,nums);
        return ans.size();
    }
};