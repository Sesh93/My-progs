class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2)
            return -1;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]>nums[j])
        //         {
        //             int temp=nums[i];
        //             nums[i]=nums[j];
        //             nums[j]=temp;
        //         }
        //     }
        // }
        sort(nums.begin(),nums.end());
        return nums[1];
    }
};