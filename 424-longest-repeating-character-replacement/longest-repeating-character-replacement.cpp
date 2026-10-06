class Solution {
public:
    int characterReplacement(string s, int k) {
        int f[26]={0};
        int r=0;
        int l=0;
        int maxcount=0;
        int maxans=0;
        int n=s.size();
        while(r<n){
            f[s[r]-'A']++;
            maxcount=max(maxcount,f[s[r]-'A']);
            while((r-l+1)-maxcount>k)
            {
                f[s[l]-'A']--;
                l++;
            }
          maxans=max(maxans,r-l+1);
          r++;
        }
        return maxans;
    }
};