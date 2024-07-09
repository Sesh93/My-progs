class Solution {
    public String shortestPalindrome(String str) {
    {
        int cnt=1;
        int n=str.length();
        Solution p = new Solution();
        if(str.equals(p.reverser(str))||n==1)
            return str;
        while(true)
        {
            String ans = str.substring(0,n-cnt);
            String revans=p.reverser(ans);
            if(ans.equals(revans))
                return p.reverser(str.substring(n-cnt,n))+str;
            cnt++;
        }
    }
    }
    public String reverser(String str)
    {
        StringBuilder revans = new StringBuilder(str);
        revans.reverse();
        return revans.toString();
    }
}
