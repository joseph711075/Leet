class Solution {
public:
    string longestPalindrome(string s) {
        int cnt = 0;
        int maxlen =-1;
        string ss;
        string maxstring;
        
        bool flag =0;
        for(int i=0;i<s.length();i++)
        {   
                int left = i-1;
                int right = i+1;
                ss+=s[i];
                while((left>=0&&s[left]==s[i])||(s[right]==s[i]&&right<s.length())) 
                {   
                    
                     if(left>=0&&s[left]==s[i])
                     {
                         ss+=s[left];
                         left--;
                     }
                    
                     if(right<s.length()&&s[right]==s[i])
                     {
                         ss+=s[right];
                         right++;
                     }   
                     
                }
                char c = s[i];
                
                while(i<s.length()&&c==s[i])
                    i++;
                i--;
            
                while((left>=0&&right<s.length())) 
                {
                    if(s[left]==s[right])
                        ss = s[left]+ss +s[left];
                    else
                        break;
                    left--;
                    right++;
                }
            
            
                if(maxlen<(int)ss.length())
                {
                    maxlen = ss.length();
                    maxstring = ss;
                }
                ss.clear();
                
        }
        
        return maxstring;
        
    }
};
