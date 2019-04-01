class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int>v1(256,0);
        vector<int>v2(256,0);
        
        for(char c:s1)
            v1[c]++;
        for(int i=0;i<s2.length();i++)
        {
            v2[s2[i]]++;
            if(i>=s1.length())  
            {
                v2[s2[i-s1.length()]]--;
            }
            if(v1==v2)
                return 1;
        }
        return 0;
        
    }
};
