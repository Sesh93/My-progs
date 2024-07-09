class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,i=0,n=s.size(),m=t.size();
        while(j<=m)
        {
            if(i==n)
                return true;
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
                j++;
        }
        return false;
    }
};