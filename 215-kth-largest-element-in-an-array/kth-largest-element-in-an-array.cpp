class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();

        // Place the (n-k)th element in its correct position
        nth_element(nums.begin(), nums.begin() + (n - k), nums.end());

        // That position now contains the kth largest element
        return nums[n - k];
    }
};


