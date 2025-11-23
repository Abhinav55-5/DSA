class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string a=to_string(n);
        char ch='0';
       long long  int sum=0;
        a.erase(remove(a.begin(),a.end(),ch),a.end());
      int  num=stoi(a);
     long long int k=num;
         while(num > 0){
         int  b=num%10;
            sum=sum+b;
            num=num/10;
         }
      
      return k*sum;
    }
};