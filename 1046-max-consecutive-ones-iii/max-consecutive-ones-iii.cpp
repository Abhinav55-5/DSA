class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int count = 0;
        int ans = 0;
        int a = 0;
        int r = 0;
        int n = nums.size();
        while (r < n) {
            if (nums[r] == 0) 
            {   
                count++;
            }
                while(count>k ) 
                {
                   if(nums[l]!=0)
                   {
                   l=l+1;
                   }
                   else{
                    count--;
                    l++;
                   }
                }
             a= r - l + 1;
            ans=max(ans,a);
            r++;
        }
        return ans;
    }
};