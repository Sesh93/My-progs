class Solution {
    public String reverseVowels(String str) {
      int n = str.length();
		char ch[] = str.toCharArray();
		char res[] = new char[n];
		int cnt=0;
		int i,j;
		for(i=0;i<n;i++)
		{
		    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
		    {
		        res[cnt]=ch[i];
		        cnt++;
		        ch[i]='^';
		    }
		}
		cnt=0;
		int t=cnt;
		for(i=n-1;i>=0;i--)
		{
		    if(ch[i]=='^')
		    {
		        ch[i]=res[cnt];
		        cnt++;
		    }
		}
		str = new String(ch);
		return str;  
    }
}