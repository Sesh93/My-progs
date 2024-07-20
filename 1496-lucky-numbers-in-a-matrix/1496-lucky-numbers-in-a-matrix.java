class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        PriorityQueue<Integer> row=new PriorityQueue<>();        
        PriorityQueue<Integer> col=new PriorityQueue<>(Collections.reverseOrder());
        List<Integer> res=new ArrayList<>();
        
        for(int i=0;i<matrix.length;i++){
            int rmin=Integer.MAX_VALUE;
            for(int j=0;j<matrix[0].length;j++){
                rmin=(rmin<matrix[i][j])?rmin:matrix[i][j];  
            }
            row.add(rmin);
        }
    
        for(int i=0;i<matrix[0].length;i++){
            int cmax=Integer.MIN_VALUE;
            for(int j=0;j<matrix.length;j++){
                cmax=(cmax>matrix[j][i])?cmax:matrix[j][i];
            }
            col.add(cmax);
        }
        System.out.println(row);
        System.out.println(col);
        
        // for(int i=0;i<row.size();i++){
        //     min=row.poll();
        //     max=col.poll();
        //     if(min==max)
        //     {
        //         res.add(min);
        //         break;
        //     }
        // }

        while(!row.isEmpty() && !col.isEmpty())
        {
            int min=row.poll();
            if(col.contains(min)){
                res.add(min);
                break;
            }

        }
        return res;

    }
}