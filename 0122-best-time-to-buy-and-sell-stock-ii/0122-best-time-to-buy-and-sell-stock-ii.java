class Solution {
    public int maxProfit(int[] arr) {
    int i,j,n=arr.length,profit=0;
    for(i=0;i<n-1;i++)
		{
		    for(j=i+1;j<n;j++)
		    {
		        if(arr[i]>=arr[j])
		        {
		            break;
		        }
		        else
		        {
		            profit+=arr[j]-arr[i];
		            break;
		        }
		    }
		}  
        return profit; 
    }
}