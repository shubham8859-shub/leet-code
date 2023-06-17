class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long tempsum=0;
        long long  maxm = nums[0];
        
        
         for(long long x:nums )
         {
             if(tempsum<0)
        {
         tempsum=0;
        }
         tempsum = tempsum+x;
         maxm = max(tempsum,maxm);
         
         }
         
         return maxm;

    }
    
};