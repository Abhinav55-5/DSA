class Solution {
    int solve(vector<int>& nums, int k) {
        if (k < 1) {
            return 0;
        }
        int s = 0;
        int count = 0;
        map<int, int> a;
        for (int l = 0; l < nums.size(); l++) {
            a[nums[l]]++;
            while (a.size() > k) {
                a[nums[s]]--;
                if (a[nums[s]] == 0) {
                    a.erase(nums[s]);
                }
                s++;
            }
            count=count+(l-s+1);
        }
        return count;
    }

public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        return solve(nums, k) - solve(nums, k - 1);
    }
};