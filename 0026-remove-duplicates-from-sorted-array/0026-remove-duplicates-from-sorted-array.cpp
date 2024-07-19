class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // unordered_map<int,int> ans;
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     ans[nums[i]]++;
        // }
        // vector<int> temp;
        // for(int i=0;i<n;i++)
        // {
        //     if(ans[nums[i]]!=0)
        //     {
        //         ans[nums[i]]=0;
        //         temp.emplace_back(nums[i]);
        //     }

        // }
        // swap(temp,nums);
        // return ans.size();
        int n=nums.size();
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};