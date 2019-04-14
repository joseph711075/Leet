class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp (grid.size()+1,vector<int>(grid[0].size()+1,0));
        for(int i = 1;i<dp.size();i++)
            for(int j=1;j<dp[0].size();j++)
            {
                if(i==1)
                {
                    dp[i][j] = dp[i][j-1]+ grid[i-1][j-1];
                    continue;
                }
                if(j==1)
                {
                    dp[i][j] = dp[i-1][j]+ grid[i-1][j-1];
                    continue;
                }    
                dp[i][j]= min(dp[i-1][j]+grid[i-1][j-1],dp[i][j-1]+grid[i-1][j-1]);
            }
        
        return dp[dp.size()-1][dp[0].size()-1];
    }
};
