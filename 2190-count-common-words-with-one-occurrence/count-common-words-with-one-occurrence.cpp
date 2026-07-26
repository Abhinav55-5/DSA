class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {

        unordered_map<string,int> mp1, mp2;

        for(string x : words1)
            mp1[x]++;

        for(string x : words2)
            mp2[x]++;

        int count = 0;

        for(auto x : mp1)
        {
            if(x.second == 1 && mp2[x.first] == 1)
                count++;
        }

        return count;
    }
};