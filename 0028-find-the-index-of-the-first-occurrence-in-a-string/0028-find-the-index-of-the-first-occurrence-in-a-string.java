class Solution {
    public int strStr(String haystack, String needle) {
        int n = haystack.length();
        int m = needle.length();
        boolean bool=false;
        if(n<m)
            return -1;
        int k,i,j;
        for(i=0;i<n;i++)
        {
            if(n-m+1<=i)
                return -1;
            if((haystack.charAt(i)==needle.charAt(0)))
            {
                k=i;
                for(j=0;j<m;j++)
                {
                    if(k<n)
                    {
                        if((needle.charAt(j)==haystack.charAt(k)))
                        {
                            bool=true;
                            k++;
                        }
                        else
                        {
                            bool=false;
                            break;
                        }
                    }
                }
                if(bool)
                    return i;
            }
        }
        return -1;
    }
}