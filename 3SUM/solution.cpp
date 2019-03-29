class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

      int val = 0;
      if(nums.empty())
           return {};
     // set<vector<int>>s;
      sort(nums.begin(),nums.end());
      vector<vector<int>> ans;
      for(int i=0;i<nums.size()-1;i++)
      {

         if(i==0||nums[i]!=val)
         {
             int min = i+1;
             int max = nums.size()-1;
             int target = 0-nums[i];
             while(min<max)
             {



                if(nums[min]+nums[max]==target)
                {
                    ans.push_back({nums[i],nums[min],nums[max]});
                    int same = nums[min];
                    min++;
                  while(nums[min]==same&&min<max)
                    min++;
                }
                else if(nums[min]+nums[max]<target)
                {
                  int same = nums[min];
                    min++;
                  while(nums[min]==same&&min<max)
                    min++;
                }
                else
                {
                  int same = nums[max];
                      max--;
                  while(nums[max]==same&&min<max)
                    max--;
                }
             }
         }
         val = nums[i];

      }


        return ans;
    }
};
