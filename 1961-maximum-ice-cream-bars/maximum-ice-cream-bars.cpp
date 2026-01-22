class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        int count =0;

        sort(costs.begin(),costs.end());
        if(costs[0]>coins){
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(coins >= costs[i]){
                coins=coins-costs[i];
                count++;
            }
        }
        return count;
    }
};