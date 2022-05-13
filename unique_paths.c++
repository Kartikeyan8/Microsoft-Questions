class Solution {
public:
    int dp[101][101];
    int bfs(int i,int j,int m,int n)
    {
        if(i==m-1 and j==n-1)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i>=m or j>=n)
            return 0;
        return dp[i][j]=bfs(i+1,j,m,n)+bfs(i,j+1,m,n);
        
        
        
        
        
    
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return bfs(0,0,m,n);
    }
};