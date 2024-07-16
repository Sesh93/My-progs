class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
    
        for(char i:s)
        {
           if(!st.empty() && st.top().first==i)
           {
                st.top().second++;
                if(st.top().second==k)
                {
                    st.pop();
                }
           }
           else
            {
                st.push({i,1});
            }
        }
        string ans;
        while(!st.empty())
        {
            ans.append(st.top().second,st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};