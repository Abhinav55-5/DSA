class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int maxlen=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];

            if(sum % k==0){
              maxlen=max(maxlen,i+1);
            }
            // most imp 
            int rem=sum%k;

            // Number is founded
            if(mp.find(rem)!=mp.end()){
                int len=i-mp[rem];
                maxlen=max(maxlen,len);
            }
            // Number is not present
            if(mp.find(rem)== mp.end()){
                 mp[rem]=i;
            }

        }
        if(maxlen>1){
            return true;
        }
        return false;
    }
};