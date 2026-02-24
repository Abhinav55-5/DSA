class Solution {
public:
    string makeGood(string s) {

        int i = 0;

        while (s.size() > 1 && i < s.size() - 1) 
        {
            char c = s[i];
            char d = s[i + 1];

            if (tolower(c) == tolower(d) && c != d)
            {
                s.erase(i, 2);
                if (i > 0)
                    {
                        i--;
                    }
            } 
            else 
            {
                i++;
            }
        }

        return s;
    }
};