class Solution {
public:
    
    
    void combinationSumhelper2(vector<int>& candidates, int target,int m, vector<int> temp, set<vector<int>> &ans)
    {
        
        if(target ==0)
        {
            ans.insert(temp);
        }

        for(int i =m;i<candidates.size();i++)
        {
            if(candidates[i]>target)
                return;
            temp.push_back(candidates[i]);
            combinationSumhelper2(candidates, target-candidates[i],i+1, temp, ans);
            temp.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        set<vector<int>>ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());        
        combinationSumhelper2(candidates, target,0, temp, ans);
        vector<vector<int>> ans2(ans.begin(),ans.end());
        return ans2;

    }
};
