class Solution {
    public char repeatedCharacter(String s) {
        char ch[] = new char[26];
        for(int i=0;i<s.length();i++)
        {
            ch[s.charAt(i)-'a']++;
            if(ch[s.charAt(i)-'a']==2)
                return s.charAt(i);
        }
        return '0';
    }
}