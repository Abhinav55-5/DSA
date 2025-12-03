class Solution {
           int solve(vector<int>& nums, int k){
               if(k<0){
                return 0;
               }
               int s=0;
               int count=0;
                int sum=0;
               for(int l=0;l<nums.size();l++)
               {
                    sum=sum+(nums[l]%2);
                    while(sum >k){
                      sum=sum-(nums[s]%2);
                      s++;
                    }
                    count=count+(l-s+1);
               }
               return count;
           }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       return solve(nums,k)-solve(nums,k-1);
    }
};