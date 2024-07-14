class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxl=0;
        int left=0;
        int n = s.size();
        unordered_map<char,int> m1;
        for(int right=0;right<n;right++)
        {
            m1[s[right]]++;
            while(m1[s[right]]>1)
            {
                m1[s[left]]--;
                left++;
            }
            maxl=max(maxl,right-left+1);
        }
        return maxl;
    }
};