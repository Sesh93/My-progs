class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans;
        for(int i=s.size()-1,j=0;i>=0;i--,j++)
        {
            ans.push_back(s[i]);
        }
        swap(ans,s);
    }
};