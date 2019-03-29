class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<vector<int>> dp;
        vector<int> temp;
        for(int i=0;i<=rowIndex;i++)
        {
            for(int j=0;j<=i;j++)
            {
              temp.push_back(1);
            }
            dp.push_back(temp);
            temp.clear();
        }
        for(int i=0;i<dp.size();i++)
        {
            for(int j=0;j<dp[i].size();j++)
            {

                if(i!=0)
                {
                    if(j-1<0||j+1>dp[i-1].size())
                        dp[i][j] =1;
                    else
                        dp[i][j] = dp[i-1][j]+dp[i-1][j-1];
                }
            }
            //cout<<"\n";
        }
        return dp[rowIndex];


    }
};
