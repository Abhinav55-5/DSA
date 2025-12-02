class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int s=0;
        int l=0;
        int n=fruits.size();
        int ans=0;
        map<int,int> mp;
        while(s<n)
        {
          mp[fruits[s]]++;
          if(mp.size()>2)
          {
            mp[fruits[l]]--;
            if(mp[fruits[l]]==0)
            {
                mp.erase(fruits[l]);  
            }
            l++;
          }
            if(mp.size()<=2){
                ans=max(ans,s-l+1);
            }
          s++;
          }
         
        
        return ans;
    }
};