class Solution {
public:
void solve( vector<string>&ans,int index,string output,string digits,string mapping[]){
     
     if(index >=digits.length()){
        ans.push_back(output);
        return ;
     }
     int number=digits[index]-'0';
     string value=mapping[number];
     for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(ans,index+1,output,digits,mapping);
        output.pop_back();
     }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int index=0;
        string output= "";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(ans,index,output,digits,mapping);
        return ans;
    }
};