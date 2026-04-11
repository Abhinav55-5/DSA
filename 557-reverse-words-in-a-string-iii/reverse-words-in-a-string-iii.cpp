class Solution {
public:
    string reverseWords(string s) {
    stringstream ss(s);
    string result;
    string word;

    while (ss >> word)
    {
     reverse(word.begin(),word.end());
     if(!result.empty()){
        result +=" ";
     }
     result=result+word;
    }
    return result;
    }
};