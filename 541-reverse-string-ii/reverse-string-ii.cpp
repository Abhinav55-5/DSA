class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        int a = 2 * k;
        int i = 0;
        int j = k - 1;

        if (n < a) {
            j = min(k - 1, n - 1);
            while (i <= j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        } else {
            i = 0;

            while (i < n) {
                j = min(i + k - 1, n - 1);
                int left = i;
                int right = j;

                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
                i += a;
            }
        }

        return s;
    }
};