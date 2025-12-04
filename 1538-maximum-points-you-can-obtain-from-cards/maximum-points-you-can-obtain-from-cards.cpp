class Solution {
   
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l=n-1;
        int total=0;
        for(int j=0;j<k;j++){
            total=total+cardPoints[j];
        }
        int maxpoints=total;
        for(int i=0;i<k;i++){
            // subtract
            total=total-cardPoints[k-1-i];
            // add
            total=total+cardPoints[l-i];
            maxpoints=max(total,maxpoints);
        }
        return maxpoints;
    }
};