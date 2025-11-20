class Solution {
public:
void solve(vector<int> nums,vector<vector<int>>&ans,int n,int index){
        
        if(index >= n){
            ans.push_back(nums);
            return ;
        }
       for(int j=index;j<n;j++){
         swap(nums[index],nums[j]);
         solve(nums,ans,n,index+1);
        //  backtrack
         swap(nums[index],nums[j]);
       } 

    
}
    vector<vector<int>> permute(vector<int>& nums) {
          int n=nums.size();
          int index=0;
       vector<vector<int>>ans;
       vector<int>output;
       solve(nums,ans,n,index);
    return ans;
    }
};