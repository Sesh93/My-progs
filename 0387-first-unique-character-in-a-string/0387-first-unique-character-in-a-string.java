class Solution {
    public int firstUniqChar(String s) {
        int i,cnt,j;
        char x;
        char ch[] = s.toCharArray();
        for(i=0;i<s.length();i++)
        {
            cnt=0;
            x=ch[i];
            for(j=i;j<s.length()&&x!='^';j++)
            {
                if(x==ch[j])
                {
                    ch[j]='^';
                    cnt++;
                }
            }
            if(cnt==1)
            {
                return i;
            }
        }
        return -1;
    }
}