class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int sum=0;
        int minlen=INT_MAX;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
       
             if(sum>=target)
             {
             minlen=min(minlen,i-l+1);
           }
               while(sum>=target)
            { 
                minlen=min(minlen,i-l+1);
                sum=sum-nums[l];
                 l++;
            }
         
        }
        if(minlen==INT_MAX){
            return 0;
        }
       return minlen;
    }
};