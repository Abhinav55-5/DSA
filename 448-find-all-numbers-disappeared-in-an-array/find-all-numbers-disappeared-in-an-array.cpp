class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {  
    //        int s=nums.size(); 
    //    unordered_set<int> ab(nums.begin(),nums.end());
    //    vector<int> mis;
      
    //    for(int i=1;i<=s;i++)
    //    {
    //     if(ab.find(i)==ab.end()) 
    //     // ab.end() means not found 
    //     {
    //         mis.push_back(i);
    //     }
    //    }
    //     return mis;

    // 0(1) solution 
      int n=nums.size();

      sort(nums.begin(),nums.end());

      nums.erase(unique(nums.begin(), nums.end()), nums.end());

      vector<int> ans;
     
int j = 0;

for(int i = 1; i <= n; i++)
{
    if(j < nums.size() && nums[j] == i)
    {
        j++;
    }
    else
    {
        ans.push_back(i);
    }
}
return ans;

    }
};