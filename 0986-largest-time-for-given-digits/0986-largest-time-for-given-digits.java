class Solution {
    public String largestTimeFromDigits(int[] arr) {
        int ch[] = new int[4];
        char ch1[] = new char[5];
        int x=4,i;
        boolean bool = true;
		Arrays.sort(arr);
        if(arr[0]>2)
            return "";
        if(arr[0]==2&&arr[1]>3)
            return "";
        if(arr[0]==2&&arr[1]==2&&arr[2]==6&&arr[3]==8)
            return "";
        if(arr[1]==2&&arr[0]<=3&&arr[2]>5)
        {
            return String.format((arr[0]+""+arr[3]+":"+arr[1]+""+arr[2]));
        }
		for(i=x-1;i>=0;i--)
		{
		    if(arr[i]<=2)
		    {
		        ch[0]=arr[i];
		        arr[i]=-1;
		        break;
		    }
		}
		for(i=x-1;i>=0;i--)
		{
		    if(ch[0]==0||ch[0]==1)
		    {
		        if(arr[i]!=-1)
		        {
		            ch[1]=arr[i];
		            arr[i]=-1;
		            break;
		        }
		    }
		    else
		    {
		        if(arr[i]!=-1&&arr[i]<=3)
		        {
		            ch[1]=arr[i];
		            arr[i]=-1;
		            break;
		        }
		    }
		}
		for(i=x-1;i>=0;i--)
		{
		    if(arr[i]!=-1&&arr[i]<=5)
		    {
		        ch[2]=arr[i];
		        arr[i]=-1;
                bool=false;
		        break;
		    }
		}
        if(bool)
            return "";
		for(i=x-1;i>=0;i--)
		{
		    if(arr[i]!=-1)
		    {
		        ch[3]=arr[i];
		        arr[i]=-1;
		        break;
		    }
		}
        String res=String.format((ch[0]+""+ch[1]+":"+ch[2]+""+ch[3]));
        return res;
    }
}