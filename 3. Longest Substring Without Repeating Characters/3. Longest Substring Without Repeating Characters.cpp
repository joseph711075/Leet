class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        
        
        string ss;
        int cnt =0;
        int hash[256]={0};
        int l=0;
        int ans=0;
        int r=0;
        while(r<s.length())
        {
         
           hash[s[r]]++;
           cnt++;
          if(hash[s[r]]>1)
          {
             while(s[l]!=s[r])   
             {
                hash[s[l]]--; 
                l++;
                cnt--;
             }
                hash[s[l]]--; 
                l++;
                cnt--;
          }
           ans = max(ans,cnt);  
           r++; 
        }
        
        return ans;
    }
};
