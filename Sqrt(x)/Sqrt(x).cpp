class Solution {
public:
    int mySqrt(int x) {
       
        int r = x;
        int l = 0;
        while(l<=r)
        {
            int mid = (r+l)/2;
            if((long long)mid*mid<=x)
            {
                l=mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        
        return r;
        
        //0,1,2,3,4,5,6,7,8                 8
        
    }
};
