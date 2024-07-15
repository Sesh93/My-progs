class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> h1 = new HashSet<>();
        int n = nums.length;
        for(int i=0;i<n;i++)
        {
            h1.add(nums[i]);
        }
        int m = h1.size();
        if(n==m)
            return false;
        else
            return true;
    }
}