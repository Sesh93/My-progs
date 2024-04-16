class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i,j=0;
        boolean bool=false;
        for(i=0;i<nums.length;i++)
        {
            for(j=i+1;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    bool = true;
                    break;
                }
            }
            if(bool)
                break;
        }   
        int ans[] = new int[2]; 
        ans[0]=i;
        ans[1]=j;
        return ans;
    }
}