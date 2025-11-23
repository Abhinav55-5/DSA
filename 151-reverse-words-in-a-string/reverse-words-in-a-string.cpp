class Solution {
public:
    string reverseWords(string s) {
        string clean = "";
        int i = 0, n = s.size();
        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++;
            }
            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            if (word.size() > 0) {
                if (clean.size() > 0) {
                    clean = " " + clean;
                }
                clean = word + clean;
            }
        }
       return clean;
    }
};