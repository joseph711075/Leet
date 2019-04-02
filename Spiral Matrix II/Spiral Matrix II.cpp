class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     
        vector<vector<int>>matrix(n,vector<int>(n,0));
        int cnt = 1;
        int rowbegin =0;
        int colbegin =0;
        int rowend =matrix[0].size()-1;
        int colend = matrix.size()-1;
        vector<int>ans;
        
        while(rowbegin<=rowend)
        {
            
            for(int i = rowbegin;i<=rowend;i++)
            {
                matrix[colbegin][i] = cnt;
                cnt++;
            }
            colbegin++;
            if(colbegin>colend)
                break;
            for(int i = colbegin;i<=colend;i++)
            {
                matrix[i][rowend] = cnt;
                cnt++;
            }
            rowend--;
            if(rowbegin>rowend)
                break;
            for(int i = rowend;i>=rowbegin;i--)
            {
                matrix[colend][i]=cnt;
                cnt++;
            }
            colend--;   
            if(colbegin>colend)
                break;
            for(int i = colend;i>=colbegin;i--)
            {
                matrix[i][rowbegin]=cnt;
                cnt++;
            }
            rowbegin++;

        }
        

        
        return matrix;
        
        
        
    }
};
