class Solution {
 int    solve(string s,int k){
     int l=0;
     int count=0;
     map<char,int> a;
     for(int i=0;i<s.size();i++ ){
         a[s[i]]++;
         while(a.size()>k){
            a[s[l]]--;
            if(a[s[l]]==0){
                a.erase(s[l]);
            }
            l++;
         }
         count=count+(i-l+1);
     }
     return count;
 }
public:
    int numberOfSubstrings(string s) {
        return solve(s,3)-solve(s,2);
    }
};