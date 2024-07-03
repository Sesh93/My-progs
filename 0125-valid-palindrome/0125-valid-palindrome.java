class Solution {
    public boolean isPalindrome(String s) {
        String temp=s.toLowerCase();
        char ch[] = new char[s.length()];
        int index=0;
        for(char i:temp.toCharArray())
        {
            if(Character.isLetterOrDigit(i))
            {
                ch[index++]=i;
            }
        }
        for(int i=0;i<index/2;i++)
        {
            if(ch[i]!=ch[index-1-i])
                return false;
        }
        return true;
    }
}