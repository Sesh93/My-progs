class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char> st;
        for(char i:s)
        {
            if((!st.empty())&&(i==st.top()))
            {
                st.pop();
            }
            else
                st.push(i);
        }    
        string str="";
        while(!st.empty())
        {
            str=st.top()+str;
            st.pop();
        }
        return str;
    }
};