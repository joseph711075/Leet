class Solution {
    
public:

    vector<string> letterCombinations(string digits) {
       vector<vector<char>> hash(10); 
        hash[0] = {' '};
        hash[1] = {};
        hash[2] = {'a','b','c'};
        hash[3] = {'d','e','f'};
        hash[4] = {'g','h','i'};
        hash[5] = {'j','k','l'};
        hash[6] = {'m','n','o'};
        hash[7] = {'p','q','r','s'};
        hash[8] = {'t','u','v'};
        hash[9] = {'w','x','y','z'};
        
        vector<string> res;
        string chosen;
        letterCombinations_helper(hash, digits, 0, chosen, res);
        return res;
    }
    
        void letterCombinations_helper(vector<vector<char>> hash,string &digits,int k,string chosen,vector<string> &res)
    {
        if(chosen.length()==digits.length())
        {
            if(digits.length()!=0)
                res.push_back(chosen);
        }
        else
        {
            for(const char c: hash[digits[k]-'0'])
            {
               chosen+=c;
               letterCombinations_helper(hash,digits,k+1,chosen,res);
               chosen.pop_back(); 
            }
        }
    }
    
};
