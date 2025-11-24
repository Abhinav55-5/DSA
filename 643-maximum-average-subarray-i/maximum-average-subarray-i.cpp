class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       
        int l = 0;
        int r = 0;
        int n = nums.size();
        int sum = 0;
        double ans =INT_MIN;
        while (r < n) 
        {
            sum = sum + nums[r];
            if (r - l + 1 == k) {
                double b =(double)sum/ k;
                ans = max(ans, b);
                sum = sum - nums[l];
                l++;
            } 
          
                r++;
            
        }
        return ans;
    }
};