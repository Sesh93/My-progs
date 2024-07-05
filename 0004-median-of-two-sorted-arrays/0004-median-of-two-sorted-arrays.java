class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
		int i,j,n=nums1.length,m=nums2.length;
        int arr[] = new int[n+m];
        // for(i=0;i<n;i++)
        // {
        //     arr[i]=nums1[i];
            
        // }
        // for(i=n,j=0;i<n+m;i++,j++)
        // {
        //     arr[i]=nums2[j];
        // }
        // Arrays.sort(arr);
        int k=0;
        i=0;j=0;
        int mid=(n+m)/2;
        double x;
        if((n+m)%2==0)
        {
            x=((double)arr[mid-1]+(double)arr[mid])/2;
        }
        else
        {
            x=(double)arr[mid];
        }
        return x;
    }
}