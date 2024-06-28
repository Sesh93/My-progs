class Solution {
public:
    int scoreOfString(string s) {
        int cnt=0,i,n=s.length();
        for(i=0;i<n-1;i++)
        {
            cnt+=abs(int(s[i])-int(s[i+1]));
        }
        return cnt;
    }
};