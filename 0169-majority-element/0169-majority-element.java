class Solution {
    public int majorityElement(int[] nums) {
        int n,i,cnt,j;
        for(i=0;i<nums.length;i++)
        {
            n=nums[i];
            cnt=0;
            for(j=i+1;j<nums.length;j++)
            {
                if(n==nums[j])
                    cnt++;
            }
            if(cnt>=nums.length/2)
                return nums[i];
        }
        return -1;
    }
}