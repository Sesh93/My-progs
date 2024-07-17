class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i:s)
        {
            if(!st.empty()&&(i==')'||i==']'||i=='}'))
            {
                if(i==')'&&st.top()!='(')
                    return false;
                else if(i==']'&&st.top()!='[')
                    return false;
                else if(i=='}'&&st.top()!='{')
                    return false;
                else
                    st.pop();
            }
            else
                st.push(i);
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};