class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> h1 = new HashSet<>();
        int n = nums.length;
        for(int i=0;i<n;i++)
        {
            if(!h1.add(nums[i]))
                return true;
        }
        return false;
    }
}