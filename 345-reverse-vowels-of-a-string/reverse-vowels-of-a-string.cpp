class Solution {
public:
 bool isvowel(char c){
     int k=tolower(c);
     return (k=='a'||k=='e' ||k=='i' ||k=='u' ||k=='o');
 }
    string reverseVowels(string s) {
        int i=0;
        int e=s.size()-1;
         while(i<=e){
            if(!isvowel(s[i])){
                i++;
            }
            else if(!isvowel(s[e])){
                e--;
            }
            else{
                swap(s[i],s[e]);
                i++;
                e--;
            }
         }
         return s;
    }
};