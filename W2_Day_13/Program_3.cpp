class Solution {
    public static ArrayList<String> findPath(int[][] m, int n) {
        // Your code here
        int[][] vis=new int[n][n];
        ArrayList<String> res=new ArrayList<>();
        int[] delrow={+1,0,0,-1};
        int[] delcol={0,-1,+1,0};
        if(m[0][0]==1)
        helper(0,0,n,m,vis,"",res,delrow,delcol);
        return res;
    }
    static void helper(int row,int col,int n,int[][] m,int[][] vis,String ds,ArrayList<String> res,int[] delrow,int[] delcol)
    {
        if(row==(n-1) && col==(n-1))
        {
            
            res.add(ds);
            return ;
        }
        vis[row][col]=1;
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<=(n-1) && ncol>=0 && ncol<=(n-1) && m[nrow][ncol]==1 && vis[nrow][ncol]==0)
            {
                vis[nrow][ncol]=1;
                if(i==0)
                {
                    helper(nrow,ncol,n,m,vis,ds+'D',res,delrow,delcol);
                }
                if(i==1)
                {
                    helper(nrow,ncol,n,m,vis,ds+'L',res,delrow,delcol);
                }
                if(i==2)
                {
                    helper(nrow,ncol,n,m,vis,ds+'R',res,delrow,delcol);
                }
                if(i==3)
                {
                    helper(nrow,ncol,n,m,vis,ds+'U',res,delrow,delcol);
                }
                vis[nrow][ncol]=0;
                
            }
        }
        vis[row][col]=0;
        
    }
    
}