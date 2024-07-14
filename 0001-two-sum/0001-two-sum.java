class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i=0,j=0,n=nums.length;
        boolean bool=true;
        int arr[] = new int[2];
        for(i=0;i<n;i++)
        {
            if(bool)
            {
                for(j=i+1;j<n;j++)
                {
                    if(nums[i]+nums[j]==target)
                    {
                        bool=false;
                        break;
                    }
                }
            }
            if(!bool)
                break;
        }
        arr[0]=i;
        arr[1]=j;
        return arr;
    }
}