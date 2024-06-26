class Solution {
    public boolean isPalindrome(String s) {
        String str=s.replace(" ","").toLowerCase().replaceAll("[^a-zA-Z0-9]","");
        StringBuilder st = new StringBuilder(str);
        st.reverse();
        String str1=st.toString();
        if(str1.equals(str))
            return true;
        else
            return false;
    }
}