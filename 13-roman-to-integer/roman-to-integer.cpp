class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> a;
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;
        int result=0;
        for(int i=0;i<s.size();i++){
         if(i+1<s.size() && a[s[i]]<a[s[i+1]]){
            result=result-a[s[i]];
         }
         else{
            result+=a[s[i]];
         }
        }
        return result;
    }
};