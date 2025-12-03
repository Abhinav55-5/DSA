class Solution {
public:
 int solve(vector<int>nums,int k){
    if(k<0){
        return 0;
    }
       int count=0;
       int sum=0;
        int s=0;
        for(int l=0;l<nums.size();l++){
            sum=sum+nums[l];
          while(sum>k)
          {
            sum=sum-nums[s];
            s++;
          }
          count=count+(l-s+1);
        }
        return count;
 }
    int numSubarraysWithSum(vector<int>& nums, int goal) 

    {
        return solve(nums,goal)- solve(nums,goal-1);
    }
};