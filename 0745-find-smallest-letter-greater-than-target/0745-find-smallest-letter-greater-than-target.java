class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int left=0,right=letters.length-1;
        int mid=0;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(target==letters[mid])
            {
                left=mid+1;
            }
            else if(target>letters[mid])
                left=mid+1;
            else
                right=mid-1;
        }
        return letters[left%letters.length];
    }
}