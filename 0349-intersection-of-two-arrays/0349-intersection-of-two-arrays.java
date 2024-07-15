class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> h1 = new HashSet<>();
        HashSet<Integer> h2 = new HashSet<>();
        int n = nums1.length;
        int m = nums2.length;
        for(int i=0;i<n;i++)
        {
            h1.add(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            if(h1.contains(nums2[i]))
            {
                h2.add(nums2[i]);
            }
        }
        int arr[] = new int[h2.size()];
        int j=0;
        for(int ele:h2)
        arr[j++]=ele;
        return arr;
    }
}