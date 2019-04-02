class Solution {
public:
    
    void dfs(vector<string>&ans,string chosen,int left,int right)
    {
        if(left>right) // impossible to complete the task  ....(() <- invalid
            return;
        if(right==0&&left==0) // task completed
            ans.push_back(chosen);
        if(left>0) 
            dfs(ans,chosen+'(',left-1,right);
        if(right>0)
            dfs(ans,chosen+')',left,right-1);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        dfs(ans,"",n,n);
        return ans;
    }
};
