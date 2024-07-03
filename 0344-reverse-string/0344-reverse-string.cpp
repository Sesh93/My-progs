class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=s.size()-1,j=0;j<i;i--,j++)
        {
            swap(s[i],s[j]);
        }
    }
};