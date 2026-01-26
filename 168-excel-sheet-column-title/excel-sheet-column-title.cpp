class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        while(n>0){
            n--;
            char ch='A'+(n%26);
            ans.push_back(ch);
            n=n/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

};